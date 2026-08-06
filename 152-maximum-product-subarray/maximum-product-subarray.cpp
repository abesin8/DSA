class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        long long maxpdt=INT_MIN;
        for(int i=0;i<n;i++){
            long long pdt=nums[i];
            maxpdt=max(maxpdt,pdt);
            for(int j=i+1;j<n;j++){
                pdt*=nums[j];
                maxpdt=max(maxpdt,pdt);
            }
        }
        return maxpdt;
    }
};