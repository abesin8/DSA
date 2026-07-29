class Solution {
public:
    void setZeroes(vector<vector<int>>& nums) {
        int m=nums.size();
        int n=nums[0].size();
        vector<int> zerow;
        vector<int> zercol;
        int row=-1,col=-1;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(nums[i][j]==0){
                    zerow.push_back(i);
                    zercol.push_back(j);
                }
            }
        }
        for(int j=0;j<zerow.size();j++){
            for(int i=0;i<m;i++){
                nums[i][zercol[j]]=0;
            }
            for(int i=0;i<n;i++){
                nums[zerow[j]][i]=0;
            }
        }
    }
};