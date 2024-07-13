class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        // Here we have to add all the sub arrasys (inside arrays)
        int tillMax = 0;
        for (int i=0; i<accounts.size(); i++) {
            int iSum = 0;
            for (int j=0; j<accounts[i].size(); j++) {
                iSum = iSum + accounts[i][j];
            }
            if (iSum > tillMax) {
                tillMax = iSum;
            }
        }
        return tillMax;
    }
};