class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int, int> valFreq;
        for (int i=0; i<n; i++){
            valFreq[nums[i]]++;
            if (valFreq[nums[i]] > n/2) return nums[i];

        }
        for (auto i:valFreq){
            if (i.second > n/2) return i.first;
        }
        return 0;
    }
};