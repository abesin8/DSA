class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int> v;
        vector<pair<int,int>> ind;
        for(int i=0;i<n;i++){
            ind.push_back({nums[i],i});
        }
        sort(ind.begin(),ind.end());

        int i=0,j=n-1;
        while(i<j){
            int sum = ind[i].first + ind[j].first;
            if(sum==target){
                v.push_back(ind[i].second);
                v.push_back(ind[j].second);
                return v;
            }
            if(sum<target){
                i++;
            }
            else{
                j--;
            }
        }
        return v;
        
        // unordered_map<int,int> m;
        // for(int i=0;i<n;i++){
        //     m[nums[i]]=i;
        // }
        // for(int i=0;i<n;i++){
        //     int diff=k-nums[i];
        //     if(m.find(diff)!=m.end() && m[diff]!=i){
        //         v.push_back(i);
        //         v.push_back(m[diff]);
        //         return v;
        //     }
        // }
        // return v;
    }
};