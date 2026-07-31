class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> pt(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                if(j==0 || j==i){
                    pt[i].push_back(1);
                }
                else{
                    int x=pt[i-1][j] + pt[i-1][j-1];
                    pt[i].push_back(x);
                }
            }
        }
        return pt;
    }
};