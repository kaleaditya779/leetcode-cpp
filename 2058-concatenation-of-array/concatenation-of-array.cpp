class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int numS = nums.size();
        int count = 2*numS;
        vector<int> ansArr(count, 0);
        int m = 0;
        for (int i=0; i<count; i++) {
            if (i < numS){
                ansArr[i] = nums[i];
            } else {
                ansArr[i] = nums[m];
                m++;
            }
        }
        return ansArr;
    }
};