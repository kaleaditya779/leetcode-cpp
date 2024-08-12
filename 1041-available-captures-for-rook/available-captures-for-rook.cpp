class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        // 1st we have to get the position of rook.
        int r=0;
        int c=0;
        for (int i=0; i<board.size(); i++){
            for (int j=0; j<board[i].size(); j++){
                if (board[i][j]=='R') {
                    r=i;
                    c=j;
                    break;
                }
            }
        }

        

        // now checking in the same row and column for presenty of any pawn...
        int count=0;
        if (c>0) {
            for (int i=c-1; i>=0; i--){
                if (board[r][i]=='B'){
                    break;
                } else if (board[r][i]=='p') {
                    count++;
                    break;
                }
            }
        }
        if (c<7){
            for (int i=c+1; i<8; i++){
                if (board[r][i]=='B'){
                    break;
                } else if (board[r][i]=='p') {
                    count++;
                    break;
                }
            }
        }
        if (r>0){
            for (int i=r-1; i>=0; i--){
                if (board[i][c]=='B'){
                    break;
                } else if (board[i][c]=='p') {
                    count++;
                    break;
                }
            }
        }
        if (r<7) {
            for (int i=r+1; i<8; i++){
                if (board[i][c]=='B'){
                    break;
                } else if (board[i][c]=='p') {
                    count++;
                    break;
                }
            }
        }
        
        return count;
    }
};