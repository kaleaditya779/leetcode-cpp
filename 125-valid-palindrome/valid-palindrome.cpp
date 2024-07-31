class Solution {
public:

    // void removeSpaces(string s) {
    //     for (int i=0; i<s.size(); i++){
    //         if (s[i]==' ') {
    //             s.erase(s.begin()+i);
    //             i--;
    //         }
    //     }
    // }

    // void removeNonAlphas(string s){
    //     s = s.replaceAll("[^a-zA-Z]", "");
    //     // return s;
    // }

    bool isPalindrome(string s) {
        // The rest garbage is for our distraction.
        // We have to only check about the alpha character that comes while iterating..
        // means we don't need to modify the string.
        int left =0;
        int right=s.size()-1;
        while (left<right){
            if (!isalnum(s[left])) {
                left++;
                continue;
            }
            if (!isalnum(s[right])) {
                right--;
                continue;
            }
            if (tolower(s[left]) != tolower(s[right])) return false;
            else {
                left++;
                right--;
            }
        }
        return true;
    }
};