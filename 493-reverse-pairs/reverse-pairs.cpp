class Solution {
public:
    void count(vector<int> &vec,int low,int mid,int high,int &cnt){
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
    }

    void merge(vector<int> &vec, int low, int mid, int high, int &cnt){
        
        count(vec,low,mid,high,cnt);
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
    }

    void mergesort(vector<int> &vec, int low, int high, int &cnt){
        if(low==high){
            return ;
        }
        int mid=(low+high)/2;
        mergesort(vec,low,mid,cnt);
        mergesort(vec,mid+1,high,cnt);
        merge(vec,low,mid,high,cnt);
    }

    int reversePairs(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        mergesort(nums,0,n-1,cnt);
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