class Solution {
public:
    char findTheDifference(string s, string t) {
        // approach: we have to XOR all the characters of both strings..
        // the result would be the extra added alphabet..
        char xorAll=s[0];
        for (int i=1; i<s.size(); i++){
            xorAll=xorAll^s[i];
        }
        for (int i=0; i<t.size(); i++){
            xorAll=xorAll^t[i];
        }
        return xorAll;
    }
};