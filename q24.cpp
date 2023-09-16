class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int left,right,top,bottom;
        left=0;
        right=m;
        top=0;
        bottom=n;
        vector<int> ans;
        while(left<right && top<bottom){
            for(int i=left;i<right;i++){
                ans.push_back(matrix[top][i]);
            }
            top++;
            for(int i=top;i<bottom;i++){
                ans.push_back(matrix[i][right-1]);
            }
            right--;
            if(top<bottom){
                for(int i=right-1;i>=left;i--){
                    ans.push_back(matrix[bottom-1][i]);
                }
                bottom--;
            }
            if(left<right){
                for(int i=bottom-1;i>=top;i--){
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }
        }

        return ans;

    }
};