class Solution {
public:
    bool isPalindrome(int x) {
        string xS = to_string(x);
        int l=0;
        int r=xS.size()-1;
        while (l<r){
            if (xS[l]==xS[r]){
                l++;
                r--;
            } else {
                return false;
            }
        }
        return true;
    }
};