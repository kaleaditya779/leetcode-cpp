class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        // rotate right by k steps: simply "right shifting" the array k times & cycling it..
        // ex. [1,2,3,4] 
        // rotate by 2 => [3,4,1,2]
        int n = nums.size();
        // approach 1:
        vector<int> dupli(n);
        for (int i=0; i<n; i++){
            dupli[(i+k)%n]=nums[i];
        }
        nums=dupli;

    }
};