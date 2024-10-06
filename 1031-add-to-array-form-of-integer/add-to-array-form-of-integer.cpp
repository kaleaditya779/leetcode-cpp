class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int> re;

        string kS = to_string(k);
        vector<int> kV;
        for (auto i:kS){
            int r = i-'0';
            kV.push_back(r);
        }
        // now i have arrays of both numbers..
        if (num.size() >= kV.size()){
            
            int diff = num.size()-kV.size();
            // have to add diff nos of 0 at the start of kV..
            vector<int> modiKV;
            for (int i=1; i<=diff; i++){
                modiKV.push_back(0);
            }
            for (auto i:kV){
                modiKV.push_back(i);
            }

            // now addition of num and modiKV;
            int carry=0;
            for (int i=modiKV.size()-1; i>=0; i--){
                int su = modiKV[i]+num[i]+carry;
                if (su <= 9) {
                    re.push_back(su);
                    carry=0;
                } else {
                    carry = 1;
                    re.push_back(su-10);
                }
            }
            if (carry==1) re.push_back(1);
            reverse(re.begin(), re.end());
            return re;
        } else {
            int diff = kV.size()-num.size();
            // have to add diff nos of 0 at the start of num..
            vector<int> modiNum;
            for (int i=1; i<=diff; i++){
                modiNum.push_back(0);
            }
            for (auto i:num){
                modiNum.push_back(i);
            }

            // now addition of kV and modiNum;
            int carry=0;
            for (int i=modiNum.size()-1; i>=0; i--){
                int su = modiNum[i]+kV[i]+carry;
                if (su <= 9) {
                    re.push_back(su);
                    carry=0;
                } else {
                    carry = 1;
                    re.push_back(su-10);
                }
            }
            if (carry==1) re.push_back(1);
            reverse(re.begin(), re.end());
            return re;
        }
        return {};
    }
};