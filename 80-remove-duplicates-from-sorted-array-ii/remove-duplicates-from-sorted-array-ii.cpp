class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=2; int k=nums.size();
        while (i<nums.size()){
            if (nums[i]==nums[i-1] && nums[i-1]==nums[i-2]){
                nums.erase(nums.begin()+i);
                k--;
            } else i++;
        }
        return k;
    }
};