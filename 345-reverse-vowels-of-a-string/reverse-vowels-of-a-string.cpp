class Solution {
public:
    string reverseVowels(string s) {
        unordered_map<char, int> vowels = {
            {'a', 1}, {'e', 1}, {'i', 1}, {'o', 1}, {'u', 1}, {'A', 1}, {'E', 1}, {'I', 1}, {'O', 1}, {'U', 1}
        };
        
        
        int left=0;
        int right=s.size()-1;
        while (left<=right){
            if (vowels[s[left]] == 1 && vowels[s[right]] == 1) {
                // swap
                swap(s[left], s[right]);
                left++;
                right--;
            } else if (vowels[s[left]] != 1 && vowels[s[right]] == 1) left++;
            else if (vowels[s[left]] == 1 && vowels[s[right]] != 1) right--;
            else {
                left++;
                right--;
            }
            
        }
        return s;
    }
};