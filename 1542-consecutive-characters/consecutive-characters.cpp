class Solution {
public:
    int maxPower(string s) {
        if (s.size()==1) return 1;

        int maxLen=0, currLen=0, iter=0;
        while (iter<s.size()-1){
            if (s[iter]==s[iter+1]){
                currLen++;
                maxLen=max(maxLen, currLen);
                iter++;
            } else {
                currLen=0;
                iter++;
            }
        }
        return maxLen+1;
    }
};