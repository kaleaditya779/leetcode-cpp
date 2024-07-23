class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> re;
        for (int i=0; i<nums.size(); i++) {
            string n = to_string(nums[i]);
            for (char j:n){
                // cout<<j<<" ";
                int jj = j - '0';
                // int jj = (int) j;
                re.push_back(jj);
            }
        }
        return re;
    }
};