class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int iS = image.size();
        vector<vector<int>> flipped(image.size());
        for (int i=0; i<image.size(); i++){
            for (int j=image[i].size()-1; j>=0; j--){
                if (image[i][j]==0) {
                    flipped[i].push_back(1);
                } else {
                    flipped[i].push_back(0);
                }
            }
        }
        return flipped;
    }
};