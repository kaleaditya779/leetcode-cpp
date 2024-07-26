class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // 1. brute force: O(N^2), space = O(1)
        /*
        for (int i=0; i<nums.size(); i++){
            for (int j=i; j<nums.size(); j++){
                if (nums[i]+nums[j] == target) return {i,j};
            }
        }
        */

        // 2. Using hash tables 
        // setting map with val:index, then subtract i from target and if the given value is present in map, return their index.: O(N), space = O(N)
        
        unordered_map<int, int> num;
        for (int i=0; i<nums.size(); i++){
            num[nums[i]]=i;
        }
        for (int i=0; i<nums.size(); i++){
            int require = target-nums[i];
            if (num.count(require) == 1 && num[require] != i) return {i, num[require]};
            else continue;
        }
        
        
        // ** IMP : All the approaches where sorting is there, they don't work, as the indices of elements get changed..
        // 3. sorting the array then using 2 pointers: O(NlogN + N) = O(NlogN), space = O(1) 
        // sort(nums.begin(), nums.end());
        // int left = 0;
        // int right = nums.size()-1;
        // while (left<right) {
        //     if (nums[left]+nums[right] == target) return {left, right};
        //     else if (nums[left]+nums[right] > target) right--;
        //     else if (nums[left]+nums[right] < target) left++;
        // }
        
        
        





        return {};
    }
};