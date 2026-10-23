class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int low=0,hi=n-1;
        int mini=INT_MAX;
        while(low<=hi){
            int mid =(low+hi)/2;
            if(nums[mid]>=nums[low]){
                if(nums[low]>nums[hi]){
                    low=mid+1;
                }
                else{
                    hi=mid-1;
                    mini=min(mini,nums[low]);
                }
            }
            else{
                hi=mid-1;
                mini=min(mini,nums[mid]);
            }
        }
        return mini;
    }
};