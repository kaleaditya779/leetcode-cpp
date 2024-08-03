class Solution {
public:

    int getLongestSequence(string s, char targetChar){
        int count=0, Mcount=0;
        for (int i=0; i<s.size()-1; i++){
            if (s[i]==s[i+1] && s[i]==targetChar){
                count++;
                Mcount=max(Mcount, count);
            } else {
                count=0;
            }
        }
        return Mcount;
    }


    bool checkZeroOnes(string s) {
        if (s.size()==1 && s[0]=='1') return true;
        else if (s.size()==1 && s[0]=='0') return false;
        int maxZeroCount=getLongestSequence(s, '0');
        int maxOnceCount=getLongestSequence(s, '1');
        return maxOnceCount>maxZeroCount;
    }
};