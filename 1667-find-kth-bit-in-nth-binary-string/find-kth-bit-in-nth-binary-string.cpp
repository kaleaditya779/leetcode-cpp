class Solution {
public:
    string invert(string num) {
        // function to iterate through the string and find it's 1's complement
        for (int i=0; i<num.size(); i++){
            if (num[i]=='0') num[i]='1';
            else num[i]='0';
        }
        return num;
    }

    char findKthBit(int n, int k) {
        string s1 = "0";
        // int slen = 1;
        string preS = s1;
        string currS = s1;
        for (int i=2; i<=n; i++){
            currS = preS + "1";
            string preIn = invert(preS);
            reverse(preIn.begin(), preIn.end());
            currS = currS + preIn;
            // slen = slen*2+1;
            preS = currS;
        }
        // int shiftPosition = slen-k;
        // int a = 1<<shiftPosition;
        return currS[k-1];
    }
};