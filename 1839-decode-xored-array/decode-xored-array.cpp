class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> re(encoded.size()+1);
        re[0]=first;
        for (int i=1; i<encoded.size(); i++){
            re[i] = encoded[i-1]^re[i-1];
        }
        re[encoded.size()]=encoded[encoded.size()-1]^re[encoded.size()-1];
        return re;
    }
};