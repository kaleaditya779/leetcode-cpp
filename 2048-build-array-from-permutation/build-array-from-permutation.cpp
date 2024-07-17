class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int si = nums.size();
        vector<int> ans(si);

        for (int i=0; i<si; i++){
            ans[i] = nums[nums[i]];
        }
        return ans;
    }
};