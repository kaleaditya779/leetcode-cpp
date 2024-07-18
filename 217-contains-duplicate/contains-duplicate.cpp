class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // for (int i=0; i<nums.size(); i++){
        //     int cnt = count(nums.begin(), nums.end(), nums[i]);
        //     if (cnt > 1){
        //         return true;
        //         break;
        //     } else {
        //         continue;
        //     }
        // }
        // return false;

        sort(nums.begin(), nums.end());
        for (int i=0; i<nums.size()-1; i++){
            if (nums[i] == nums[i+1]){
                return true;
            }
        }
        return false;
    }
};