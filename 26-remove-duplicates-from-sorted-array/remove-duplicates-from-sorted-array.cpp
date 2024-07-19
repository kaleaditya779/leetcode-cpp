class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 1){
            return 1;
        }
        int uniqueCount = 1;
        vector<int> re;
        int i=0;
        while (i<nums.size()-1){
            if (count(re.begin(), re.end(), nums[i]) == 0){
                re.push_back(nums[i]);
                // i++;
            }
            
            for (int j=i+1; j<nums.size(); j++){
                if (nums[i]==nums[j]){
                    i++;
                    continue;
                } 
                else {
                    re.push_back(nums[j]);
                    i=j;
                    uniqueCount++;
                    break;
                }
            }
        }
        nums.clear();
        nums=re;
        // for (auto i:nums){
        //     cout<<i<<" ";
        // }

        return uniqueCount;
    }
};