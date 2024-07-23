class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        set<string> from;
        vector<string> to;
        for (int i=0; i<paths.size(); i++){
            from.insert(paths[i][0]);
            to.push_back(paths[i][1]);
        }
        int i1=-1;
        for (int i=0; i<paths.size(); i++){
            if (from.count(to[i]) == 0) {
                i1 = i;
                break;
            }
            else continue;
        }
        return to[i1];
    }
};