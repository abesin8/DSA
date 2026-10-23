class Solution {
public:
    int mySqrt(int x) {
        if(x==0) return 0;
        int low=1,hi=x;
        int ans=1;
        while(low<=hi){
            long long mid=low +(hi-low)/2;
            long long pdt=mid*mid;
            if(pdt <=x){
                ans=mid;
                low=mid+1;
            }
            else{
                hi=mid-1;
            }
        }
        return ans;
    }
};