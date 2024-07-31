class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<char, int> valF;

        for (int row=0; row<board.size(); row++){
            for (int col=0; col<board[row].size(); col++){
                if (board[row][col] == '.') {
                    continue;
                }
                else if (valF.count(board[row][col]) == 0){
                    valF[board[row][col]]++;
                } else if (valF.count(board[row][col]) > 0) {
                    return false;
                }
            }
            valF.clear();
        } // Row validation done..
        
        valF.clear();

        for (int col=0; col<board[0].size(); col++){
            for (int row=0; row<board.size(); row++){
                if (board[row][col] == '.') continue;
                else if (valF.count(board[row][col]) == 0){
                    valF[board[row][col]]++;
                } else if (valF.count(board[row][col]) > 0) {
                    return false;
                }
            }
            valF.clear();
        } // column validation done..
        

        // Here now checking for sub matrices, we break them into 0,1,2,3,...8
        // Just like coln and row checking, we will create DS to store the subbox, then check if the current element belonging to that subbox exists in DS..
        vector<unordered_map<char, int>> checkSub(9);

        for (int row=0; row<board.size(); row++){
            for (int col=0; col<board[row].size(); col++){
                int gridIndex = (row/3)*3 + col/3; // ** logic to find out that current element belongs to which indexed grid or subbox..
                if (board[row][col] == '.') continue;
                else if (checkSub[gridIndex].count(board[row][col]) == 0) {
                    checkSub[gridIndex][board[row][col]]++;
                } else if (checkSub[gridIndex].count(board[row][col]) > 0) {
                    return false;
                }
            }
        }


        
        return true;
    }
};