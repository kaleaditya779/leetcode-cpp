class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        /*
        vector<vector<int>> solu;
        int currentMax = 0;
        int m = 0, n=0;
        vector<int> temp;
        for (int i=m; i<m+3; i++){       
            for (int j=n; j<n+3; j++) {
                if (currentMax < grid[i][j]){
                    currentMax = grid[i][j];
                } if (i==m+2 && j==n+2) {
                    
                    temp.push_back(currentMax);
                    currentMax=0;
                    n++;
                    if (n+3 > grid[0].size()){
                        solu.push_back(temp);
                        temp.clear();
                        n=0;
                        m++;
                        continue;
                        if (m+3 > grid.size()){
                            return solu;
                        }
                    }

                }
            }
        }
        
    return solu;
    */
        int n = grid.size();
    vector<vector<int>> solu(n - 2, vector<int>(n - 2));

    for (int i = 0; i < n - 2; ++i) {
        for (int j = 0; j < n - 2; ++j) {
            int currentMax = 0;
            for (int k = 0; k < 3; ++k) {
                for (int l = 0; l < 3; ++l) {
                    currentMax = max(currentMax, grid[i + k][j + l]);
                }
            }
            solu[i][j] = currentMax;
        }
    }
    
    return solu;
    }
};