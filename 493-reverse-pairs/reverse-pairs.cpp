class Solution {
public:
    int count(vector<int> &vec,int low,int mid,int high){
        int cnt=0;
        int left=low;
        int right=mid+1;
        while(left<=mid && right<=high){
            if((long long)vec[left]>2*(long long)vec[right]){
                cnt+=mid-left+1;
                right++;
            }
            else{
                left++;
            }
        }
        return cnt;
    }

    int merge(vector<int> &vec, int low, int mid, int high){
        
        int cnt=count(vec,low,mid,high);
        vector<int> temp;
        int left=low;
        int right=mid+1;
        while(left<=mid && right<=high){
            if(vec[left]>vec[right]){
                temp.push_back(vec[right]);
                right++;
            }
            else{
                temp.push_back(vec[left]);
                left++;
            }
        }
        while(left<=mid){
            temp.push_back(vec[left]);
            left++;
        }
        while(right<=high){
            temp.push_back(vec[right]);
            right++;
        }
        for(int i=low;i<=high;i++){
            vec[i]=temp[i-low];
        }
        return cnt;
    }

    int mergesort(vector<int> &vec, int low, int high){
        int cnt=0;
        if(low>=high){
            return cnt;
        }
        int mid=(low+high)/2;
        cnt+=mergesort(vec,low,mid);
        cnt+=mergesort(vec,mid+1,high);
        cnt+=merge(vec,low,mid,high);
        return cnt;
    }

    int reversePairs(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        cnt+=mergesort(nums,0,n-1);
        return cnt;

        // for(int i=n-1;i>0;i--){
        //     for(int j=i-1;j>=0;j--){
        //         if((long long)nums[j]>2*(long long)nums[i]){
        //             netcnt++;
        //         }
        //     }
        // }
        // return netcnt;
    }
};