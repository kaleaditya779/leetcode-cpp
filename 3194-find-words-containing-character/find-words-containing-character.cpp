class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> indic;

        for (int i=0; i<words.size(); i++){
            if (words[i].find(x) != -1){
                indic.push_back(i);
            }
        }

        return indic;
    }
};