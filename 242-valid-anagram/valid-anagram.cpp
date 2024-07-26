class Solution {
public:
    bool isAnagram(string s, string t) {
        // anagram => word that can be made by rearranging letters in it.
        // The condition is that both should have same letters, its just the sequence..

        if (s.size() != t.size()) return false;
        unordered_map<char, int> sLetters;
        for (int i=0; i<s.size(); i++){
            sLetters[s[i]]++;
            // My personal note: unordered_map does not gives error, when trying to access the key which does not exist.. instead it adds that key with some default initial value,.
            // To avoid this, i can use .at() operator & get error upon accessing the key which does not exist..
        }

        // decreasing the occurances of letters in t from map..
        for (int i=0; i<t.size(); i++){
            sLetters[t[i]]--;
           if (sLetters[t[i]] < 0) return false; 
        }

        // after subtracting the occurances of letters from t, if the map still has some +ve freq, then return false..
        for (int i=0; i<s.size(); i++) {
            if (sLetters[s[i]] > 0) return false;
        }
        
        /*
        Some other approaches:
        1. Using 2 maps, and then comparing them in a for loop
        2. Sorting the strings. then if they become equal then return true else false.
        */

        return true;
    }
};