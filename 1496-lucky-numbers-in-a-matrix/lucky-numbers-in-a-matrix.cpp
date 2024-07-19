class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> row_mins;
        for (int i=0; i<matrix.size(); i++){
            int min_ele = matrix[i][0];
            for (int j=1; j<matrix[i].size(); j++){
                if (matrix[i][j] < min_ele){
                    min_ele = matrix[i][j];
                }
            }
            row_mins.push_back(min_ele);
        }
        // row_mins contains min eles of each row
        
        vector<int> colm_max;
        for (int i=0; i<matrix[0].size(); i++){
            int max_ele = matrix[0][i];
            for (int j=0; j<matrix.size(); j++){
                if (max_ele < matrix[j][i]){
                    max_ele = matrix[j][i];
                }
            }
            colm_max.push_back(max_ele);
        }
        // for (auto i:row_mins){
        //     cout<<i<<" ";
        // }
        // cout<<endl;
        // for (auto i:colm_max){
        //     cout<<i<<" ";
        // }

        // Now those ele values which are present in both colm_max and row_mins will be returned as lucky numbers.
        vector<int> result;
        for (auto i:row_mins){
            for (auto j:colm_max){
                if (i == j){
                    result.push_back(i);
                }
            }
        }

        return result;
    }
};