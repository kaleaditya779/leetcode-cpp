class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> theSum;
        for (int i=0; i<nums.size(); i++) {
            if (i == 0) {
                theSum.push_back(nums[i]);
            } else {
                int previousSum = theSum[i-1] + nums[i]; 
                theSum.push_back(previousSum);
            }
        }
        return theSum;
    }
};