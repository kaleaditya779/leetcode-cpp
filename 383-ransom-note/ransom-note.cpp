#include <string>
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        unordered_map<char, int> charCount;

        for (char m: magazine){
            charCount[m]++;
        }

        for (char r: ransomNote){
            if (charCount[r] == 0) {
                return false;
            }
            charCount[r]--;
        }
        // if the control reaches this part, it means true
        return true;
        
        
    }
};