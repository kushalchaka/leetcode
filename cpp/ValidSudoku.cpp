class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        const int n = 9;
        bool row[n][n] = {false};
        bool col[n][n] = {false};
        bool square[n][n] = {false};

        for (int r = 0; r < n; r++) {
            for (int c = 0; c < n; c++) {
                if(board[r][c] == '.'){
                    continue;
                }
                int index = board[r][c] - '0' - 1;
                int area = (r/3) * 3 + (c/3);
                if(row[r][index] || col[c][index] || square[area][index]){
                    return false;
                }
                
                row[r][index] = true;
                col[c][index] = true;
                square[area][index] = true;    
            }
        }
        return true;
    }
};