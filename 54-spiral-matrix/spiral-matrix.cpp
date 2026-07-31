class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<int> v;
        int top=0,bot=m-1,left=0,right=n-1;
        while(top<=bot && left<=right){
            for(int i=left;i<=right;i++){
                v.push_back(matrix[top][i]);
            }
            top++;
            for(int i=top;i<=bot;i++){
                v.push_back(matrix[i][right]);
            }
            right--;
            if(top<=bot){
                for(int i=right;i>=left;i--){
                    v.push_back(matrix[bot][i]);
                }
                bot--;
            }
            if(left<=right){
                for(int i=bot;i>=top;i--){
                    v.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return v;
    }
};