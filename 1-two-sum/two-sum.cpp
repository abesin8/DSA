class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        int k=target;
        vector<int> v;
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            m[nums[i]]=i;
        }
        for(int i=0;i<n;i++){
            int diff=k-nums[i];
            if(m.find(diff)!=m.end() && m[diff]!=i){
                v.push_back(i);
                v.push_back(m[diff]);
                return v;
            }
        }
        return v;
    }
};