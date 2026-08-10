class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0,high=n-1;
        vector<int> v(2,-1);
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]>target){
                high=mid-1;
            }
            else if(nums[mid]<target ){
                low=mid+1;

            }
            else{
                v[1]=mid;
                low=mid+1;
            }
        }
        low=0,high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]>target){
                high=mid-1;
            }
            else if(nums[mid]<target ){
                low=mid+1;

            }
            else{
                v[0]=mid;
                high=mid-1;
            }
        }
        return v;
    }
};