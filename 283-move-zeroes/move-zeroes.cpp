class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // if making another array with same size, initializing it with 0. then iterating through given array and placing non-zero number in new array.
        // but the constraint is we have to do it in-place.

        int left=0;
        int right=left;
        while (right<nums.size()){
            if (nums[left]!=0){
                left++;
                right=left;
            } else {
                right++;
                if (right<nums.size() && nums[right]!=0) {
                    swap(nums[left], nums[right]);
                    left++;
                    right=left;
                }
            }

            

        }
    }
};