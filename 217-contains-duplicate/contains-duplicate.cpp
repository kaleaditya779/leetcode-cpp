class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // 3 approaches: O(N^2) space-O(1), O(NlogN) space-O(1), O(N) space-O(N);

        // Comparing each to every other:
        /*
        for (int i=0; i<nums.size()-1; i++){
            for (int j=i; j<nums.size()){
                if (nums[i] == nums[j]) return true;
                else return false;
            }
        }
        */

        // Sorting and comparing neghbours:
        /*
        sort(nums.begin(), nums.end());
        for (int i=0; i<nums.size()-1; i++){
            if (nums[i] == nums[i+1]){
                return true;
            }
        }
        return false;
        */

        // Using set to store each encountering element, if already exists return true:
        /*
        unordered_set<int> theSet;
        for (int i=0; i<nums.size(); i++){
            if (theSet.count(nums[i]) == 1) return true;
            else theSet.insert(nums[i]); 
        }
        return false;
        */

        unordered_map <int, int> mpp;
        for (int i = 0; i < nums.size(); i ++){
            mpp[nums[i]] ++;
            if (mpp[nums[i]] > 1){
                return true;
            }
        
        }
        return false;
    }
};