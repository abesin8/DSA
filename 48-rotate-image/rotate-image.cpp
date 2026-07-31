class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        vector<vector<int>> v(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                v[i].push_back(matrix[i][j]);
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                matrix[i][j]=v[n-j-1][i];
            }
        }
    }
};