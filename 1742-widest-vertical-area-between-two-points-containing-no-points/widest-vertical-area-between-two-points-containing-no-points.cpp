class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector<int> xCoordinates;
        for (auto i:points){
            xCoordinates.push_back(i[0]);
        }
        sort(xCoordinates.begin(), xCoordinates.end());
        // finding the difference between adjacent x coordinates
        int maxWidth = 0;
        for (int i=0; i<xCoordinates.size()-1; i++){
            if (maxWidth < (xCoordinates[i+1]-xCoordinates[i])) {
                maxWidth = xCoordinates[i+1]-xCoordinates[i];
            } 

        }
        return maxWidth;
    }
};