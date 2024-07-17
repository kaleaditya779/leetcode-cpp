class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> freq;
        // <int, int> = <num[i], freq>
        for (int i=0; i<nums.size(); i++){
            freq[nums[i]]++;
        }
        int goodPairs = 0;
        for (auto i:freq){
            if (i.second > 1){
                goodPairs += (i.second*(i.second-1)/2);
            }
        }
        return goodPairs;
    }
};