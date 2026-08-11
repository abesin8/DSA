class Solution {
public:
    int breakpnt(vector<int> &nums,int n) {
        for(int i=n-1;i>0;i--){
            if(nums[i-1]>nums[i]){
                return i;
            }
        }
        return 0;
    }

    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int k=breakpnt(nums,n);
        int low=0,high=n-1;
        if(nums[0]<=target){
            high=(n+k-1)%n;
        }
        else{
            low=k;
        }
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return -1;
    }
};