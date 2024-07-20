class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
    int pairCount = 0;
    for (int i=0; i<nums.size()-1; i++){
        for (int j=i+1; j<nums.size(); j++) {
            if (nums[i]+nums[j] < target) pairCount++;
        }
    }
    return pairCount;

    // int left=0;
    // int right=nums.size()-1;
    // while (left < right){
    //     if (nums[left]+nums[right] < target) {
            
    //         pairCount++;
    //         if (right == left-1) {
    //         left++;
    //         right = nums.size()-1;
    //         } else right--;
    //     }
        
    // }
    // return pairCount;

    }
};