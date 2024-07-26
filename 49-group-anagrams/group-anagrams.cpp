class Solution {
public:

    // bool isAnagram(string s1, string s2){
    //     if (s1.size() != s2.size()) return false;

    //     unordered_map<char, char> s1Letters;
    //     for (int i=0; i<s1.size(); i++){
    //         s1Letters[s1[i]]++;
    //     }

    //     for (int i=0; i<s2.size(); i++){
    //         s1Letters[s2[i]]--;
    //         if (s1Letters[s2[i]] < 0) return false;
    //     }

    //     for (auto i:s1Letters) {
    //         if (i.second > 0) return false;
    //     }

    //     return true;
    // }
    // ** IMP: This approach of comparing every pair of strings is not efficient..


    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string, vector<string>> sortVals;
        for (int i=0; i<strs.size(); i++){
            string s = strs[i];
            sort(s.begin(), s.end());
            sortVals[s].push_back(strs[i]); 
        }

        vector<vector<string>> anaTogether;
        for (auto& i:sortVals){
            anaTogether.push_back(i.second);
        }
        
        return anaTogether;
    }
};