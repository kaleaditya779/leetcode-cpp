class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {        
        unordered_map<int, int> valFreq;

        // loop O(N) 
        for (int i=0; i<nums.size(); i++){
            valFreq[nums[i]]++;
        }

        // sort O(NlogN)
        // Here i will have to convert map to vector<pair<int, int>> then sort..
        vector<pair<int, int>> valPairs(valFreq.begin(), valFreq.end());

        sort(valPairs.begin(), valPairs.end(), [](const pair<int, int>& a, const pair<int, int>& b){return a.second > b.second;
            return a.second > b.second;
        });

        vector<int> result;

        for (const auto& i:valPairs){
            if (result.size()<k){
                result.push_back(i.first);
            } else {
                break;
            }
            
        }

        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        // Tried this approach, but realized that we have to return the numbers not only frequencies..
        // size_t slow=0;
        // size_t fast=0;
        // vector<int> numCounts(nums.size(), 0);
        // while (fast<nums.size()){
        //     if (nums[slow]==nums[fast]){
        //         numCount[slow]++;
        //         fast++;
        //     }
        //     else if (nums[slow]!=nums[fast]){
        //         slow=fast;
        //         numCount[slow]++;
        //         fast++;
        //     }
        // }
        // // Now i have a vector containing frequencies of all the unique digits in nums. just need to place all nonzero digits at beginning.
        // vector<int> newNum;
        // for (int i=0; i<numCount.size(); i++){
        //     if (numCount[i]!=0) newNum.push_back(numCount[i]);
        //     else continue;
        // }
        
        return result;

    }
};