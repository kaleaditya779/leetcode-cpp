class Solution {
public:
    string addBinary(string a, string b) {
        // main thing to keep in mind is 1st converting both the strings to equal size..
        // so that when accessed through the index using loops, we access same level of both

        if (a.size()>=b.size()){

            int diff = a.size()-b.size();
            // now i will add diff number of 0's at the start of b
            string zeroToAdd;
            for (int i=1; i<=diff; i++){
                zeroToAdd.push_back('0');
            }
            b = zeroToAdd+b;
            int carry = 0;
            string outBin;
            for (int i=a.size()-1; i>=0; i--){
                if (a[i]=='0' && b[i]=='0' && carry==0) outBin.push_back('0');
                else if (a[i]=='0' && b[i]=='0' && carry==1) {
                    outBin.push_back('1');
                    carry=0;
                }
                else if (a[i]=='1' && b[i]=='0' && carry==0) outBin.push_back('1');
                else if (a[i]=='0' && b[i]=='1' && carry==0) outBin.push_back('1');
                else if (a[i]=='1' && b[i]=='0' && carry==1) outBin.push_back('0');
                else if (a[i]=='0' && b[i]=='1' && carry==1) outBin.push_back('0');
                else if (a[i]=='1' && b[i]=='1' && carry==0) {
                    outBin.push_back('0');
                    carry=1;
                }
                else if (a[i]=='1' && b[i]=='1' && carry==1) outBin.push_back('1');
            }

            if (carry==1) outBin.push_back('1');
            reverse(outBin.begin(), outBin.end());
            return outBin;
        }
        else {
            return addBinary(b,a);
        }
    }
};