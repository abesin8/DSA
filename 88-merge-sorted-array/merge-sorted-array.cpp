class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> v;
        for(int x:nums1){
            v.push_back(x);
        }
        int i=0,j=0;
        for(int k=0;k<(n+m);k++){
            if(i<m && j<n){
                if(v[i]<nums2[j]){
                    nums1[k]=v[i];
                    i++;
                    continue;
                }
                else{
                    nums1[k]=nums2[j];
                    j++;
                    continue;
                }
            }
            else if(i<m){
                nums1[k]=v[i];
                i++;
                continue;
            }
            else if(j<n){
                nums1[k]=nums2[j];
                j++;
                continue;
            }
        }
    }
};