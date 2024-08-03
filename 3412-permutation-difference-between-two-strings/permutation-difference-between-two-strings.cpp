class Solution {
public:
    int findPermutationDifference(string s, string t) {
        unordered_map<char, int> valIndex;
        for (int i=0; i<s.size(); i++){
            valIndex[s[i]]=i;
        }
        for (int i=0; i<t.size(); i++){
            valIndex[t[i]]=valIndex[t[i]]-i;
            if (valIndex[t[i]]<0) valIndex[t[i]]=valIndex[t[i]]*(-1);
        }
        int absoluteDiffSum=0;
        for (auto i:valIndex){
            absoluteDiffSum += i.second;
        }
        return absoluteDiffSum;
    }
};