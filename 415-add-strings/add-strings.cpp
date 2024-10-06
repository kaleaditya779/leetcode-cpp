class Solution {
public:
    string addStrings(string num1, string num2) {
        int n1 = num1.size();
        int n2 = num2.size();
        string re;
        unordered_map<int, char> intChar = {
            {1, '1'}, {2, '2'}, {3, '3'}, {4, '4'}, {5, '5'}, {6, '6'}, {7, '7'}, {8, '8'}, {9, '9'}, {0, '0'}
        };

        if (n1 >= n2){
            int diff = n1-n2;
            string di;
            for(int i=1; i<=diff; i++){
                di.push_back('0');
            }
            num2 = di+num2;
            cout<<num2;
            int carry=0;
            for (int i=n1-1; i>=0; i--){
                int r = num1[i]-'0';
                r += (num2[i]-'0') + carry;
                if (r<=9){
                    carry=0;
                    re.push_back(intChar[r]);
                } else {
                    carry=1;
                    r = r-10;
                    re.push_back(intChar[r]);
                }
            }
            if (carry==1) re.push_back('1');
            reverse(re.begin(), re.end());
            return re;
        } else {
            int diff = n2-n1;
            string di;
            for(int i=1; i<=diff; i++){
                di.push_back('0');
            }
            num1 = di+num1;
            cout<<num1;
            int carry=0;
            for (int i=n2-1; i>=0; i--){
                int r = num1[i]-'0';
                r += (num2[i]-'0') + carry;
                if (r<=9){
                    carry=0;
                    re.push_back(intChar[r]);
                } else {
                    carry=1;
                    r = r-10;
                    re.push_back(intChar[r]);
                }
            }
            if (carry==1) re.push_back('1');
            reverse(re.begin(), re.end());
            return re;
        }
    }
};