class Solution {
public:
    int returnSetBits(int value) {
        // this function returns the number of bits set in given decimal value.
        int setCount = 0;
        int result;
        while (value != 0){
            result = value%2;
            value = value/2;
            if (result == 1) setCount++;
        }
        return setCount;
    }

    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int totalSum = 0;
        for (int i=0; i<nums.size(); i++){
            int setC = returnSetBits(i);
            if (setC == k) totalSum+=nums[i];
        }
        return totalSum;
    }
};