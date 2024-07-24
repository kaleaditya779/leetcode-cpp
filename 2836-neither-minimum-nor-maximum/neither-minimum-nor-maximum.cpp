class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        if (nums.size() == 1 || nums.size() == 2) return -1;

        // for (int i=0; i<nums.size()-2; i++){
        //     if (nums[i]<nums[i+1]<nums[i+2]) return nums[i+1];
        //     else if (nums[i]>nums[i+1]>nums[i+2]) return nums[i+1];
        //     else if (nums[i]<nums[i+1]>nums[i+2]) {
        //         if (nums[i]>nums[i+2]) return nums[i];
        //         else return nums[i+2];
        //     }
        //     else if (nums[i]>nums[i+1]<nums[i+2]) {
        //         if (nums[i]<nums[i+2]) return nums[i];
        //         else return nums[i+2];
        //     }
        //     else return -1;
        // }
        
        // another technique that came to my mind:
        sort(nums.begin(), nums.end());
        return nums[1];
        // ## But sort() takes O(NlogN) time complexity (quick sort)
        // Instead i did it in O(N)
        // return 0;
    }
};