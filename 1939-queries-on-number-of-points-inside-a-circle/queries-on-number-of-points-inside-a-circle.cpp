class Solution {
public:
    float dis(int x1, int y1, int x2, int y2) {
        return sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
    }
    
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> re(queries.size());

        for (int i=0; i<queries.size(); i++){
            int ptCount = 0;
            while (ptCount < points.size()) {
                float d = dis(queries[i][0], queries[i][1], points[ptCount][0], points[ptCount][1]);
                if (d <= queries[i][2]) {
                    re[i]++;
                }
                ptCount++;
            }
        }
        return re;
    }
};