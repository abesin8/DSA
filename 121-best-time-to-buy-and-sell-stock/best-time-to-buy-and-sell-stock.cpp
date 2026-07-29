class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int n=nums.size();
        int mini=INT_MAX,maxi=INT_MIN;
        if(n==1){
            return 0;
        }
        for(int i=0;i<n;i++){
            mini=min(mini,nums[i]);
            int diff=nums[i]-mini;
            maxi=max(maxi,diff);
        }
        return maxi;
    }
};