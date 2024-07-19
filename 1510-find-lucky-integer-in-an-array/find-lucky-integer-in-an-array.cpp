class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> valFreq;
        for (int i=0; i<arr.size(); i++){
            valFreq[arr[i]]++;
        }
        vector<int> luckyBuddy;
        for (auto i:valFreq){
            if (i.first == i.second){
                luckyBuddy.push_back(i.first);
            }
        }
        int si = luckyBuddy.size();
        if (si > 0){
            sort(luckyBuddy.begin(), luckyBuddy.end());
            return luckyBuddy[si-1];
        }
        return -1;
        
    }
};