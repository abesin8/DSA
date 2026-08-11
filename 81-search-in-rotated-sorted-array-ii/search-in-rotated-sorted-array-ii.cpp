class Solution {
public:
    int findk(vector<int> &nums,int n){
        for(int i=n-1;i>0;i--){
            if(nums[i-1]>nums[i]){
                return i;
            }
        }
        return 0;
    }
    bool search(vector<int>& nums, int target) {
        int n=nums.size();
        int k=findk(nums,n);

        int low=0,high=n-1;

        if(nums[0]==target){
            return true;
            }
            else if(nums[0]>target){
                low=k;
            }
            else{
                high=(n+k-1)%n;
            }
        
        while(low<=high){
        int mid=(low+high)/2;

            if(nums[mid]==target){
                return true;
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return false;
    }
};