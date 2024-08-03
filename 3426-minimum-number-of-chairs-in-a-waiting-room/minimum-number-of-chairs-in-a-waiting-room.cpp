class Solution {
public:
    int minimumChairs(string s) {
        int currOccupied=0, maxOccupied=0;
        for (int i=0; i<s.size(); i++){
            if (s[i]=='E') {
                currOccupied++;
                maxOccupied=max(currOccupied, maxOccupied);
            } else {
                currOccupied--;
            }
        }
        return maxOccupied;
    }
};