class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> v;
        int i=m-1,j=n-1;
        for(int k=n+m-1;k>=0;k--){
            if(i>=0 && j>=0){
                if(nums1[i]>nums2[j]){
                    swap(nums1[k],nums1[i]);
                    i--;
                    continue;
                }
                else{
                    nums1[k]=nums2[j];
                    j--;
                    continue;
                }
            }
            else if(j>=0){
                nums1[k]=nums2[j];
                j--;
                continue;
            }
        }
    }
};