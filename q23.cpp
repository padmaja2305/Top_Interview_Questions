class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // check rows
        for(int i = 0; i < 9; i++) {
            unordered_set<char> st;
            for(int j = 0; j < 9; j++) {
                if(board[i][j] != '.' && st.find(board[i][j]) != st.end()) {
                    return false;
                }
                st.insert(board[i][j]);
            }
        }
        // check columns
        for(int j = 0; j < 9; j++) {
            unordered_set<char> st;
            for(int i = 0; i < 9; i++) {
                if(board[i][j] != '.' && st.find(board[i][j]) != st.end()) {
                    return false;
                }
                st.insert(board[i][j]);
            }
        }
        // check sub-boxes
        for(int i = 0; i < 9; i += 3) {
            for(int j = 0; j < 9; j += 3) {
                unordered_set<char> st;
                for(int k = i; k < i + 3; k++) {
                    for(int l = j; l < j + 3; l++) {
                        if(board[k][l] != '.' && st.find(board[k][l]) != st.end()) {
                            return false;
                        }
                        st.insert(board[k][l]);
                    }
                }
            }
        }
        return true;
        

    }
};