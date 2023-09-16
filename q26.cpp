class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>> ans;
        //if any value is 0 set it's whole row and column to be 0
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    ans.push_back({i,j});
                }
            }
        }
        for(int i=0;i<ans.size();i++){
            int row = ans[i][0];
            int col = ans[i][1];
            for(int j=0;j<m;j++){
                matrix[row][j]=0;
            }
            for(int j=0;j<n;j++){
                matrix[j][col]=0;
            }
        }
    }

};