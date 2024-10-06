class Solution {
public:
    int strStr(string haystack, string needle) {
        int hIter=0;
        int nIter=0;
        int startOfNeedle=0;
        int flag=0;
        while (hIter<haystack.size() && nIter<needle.size()){
            
            if (haystack[hIter]==needle[nIter]) {
                
                hIter++;
                nIter++;
                if (nIter==needle.size()) {
                    flag=1;
                    break;
                }
            } else {
                hIter = startOfNeedle+1;
                startOfNeedle = hIter;
                nIter=0;
            }
        }
        if (flag==1) return startOfNeedle;
        else return -1;
    }
};