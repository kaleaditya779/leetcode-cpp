class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if (nums.size()==1) return nums[0];

        // normal approaches:
        // 1) using map, storing the frequencies then returning the ele with 1 frequency. (But the space is not constant)
        // 2) Sorting the array, then iterating. if [i]!=[i+1] then returning [i]. (but the time complexity is O(NlogN) as sorting is required)

        // With respect to given constraints:
        // This is the question of bit wise operators:
        // Bitwise XOR property:
        // 1) A^A = 0
        // 2) A^B^A = A^A^B = B^A^A = B..
        int bitResult=nums[0];
        for (int i=1; i<nums.size(); i++){
            bitResult=bitResult^nums[i];
        }
        return bitResult;
    }
};