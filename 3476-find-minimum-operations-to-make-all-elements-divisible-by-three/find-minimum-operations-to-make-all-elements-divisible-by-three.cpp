class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int op = 0;
        int s = nums.size();
        for (int i=0; i<s; i++){
            if (nums[i]%3 == 0){
                continue;
            } else if (nums[i]%3 == 1){
                // subtract 1: op++
                op++;
            } else if (nums[i]%3 == 2){
                // add 1: op++;
                op++;
            }
        }
        return op;


    }
};