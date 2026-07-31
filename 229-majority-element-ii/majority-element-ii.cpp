class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n =nums.size();

        unordered_map<int,int> mp;
        vector<int> vec;
        int mm=n/3+1;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
            if(mp[nums[i]]==mm){
                vec.push_back(nums[i]);
            }
            if(vec.size()==2){
                break;
            }
        }
        
        return vec;
    }
};