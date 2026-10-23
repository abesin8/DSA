class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        int low=0,hi=n-1;
        while(low<=hi){
            int mid=(low+hi)/2;
            if(mid==hi && mid==low){
                return nums[mid];
            }
            else if(mid<hi && nums[mid]==nums[mid+1]){
                if((mid-low)%2!=0){
                    hi=mid-1;
                }
                else{
                    low=mid+2;
                }
            }
            else if(mid>low && nums[mid]==nums[mid-1]){
                if((hi-mid)%2!=0){
                    low=mid+1;
                }
                else{
                    hi=mid-2;
                }
            }
            else return nums[mid];
        }
        return -1;
    }
};