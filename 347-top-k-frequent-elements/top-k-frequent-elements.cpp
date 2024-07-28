class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {        
        
        
        // unordered_map<int, int> valFreq;
        // loop O(N) 
        // for (int i=0; i<nums.size(); i++){
        //     valFreq[nums[i]]++;
        // }

        // sort O(NlogN)
        // Here i will have to convert map to vector<pair<int, int>> then sort..
        // vector<pair<int, int>> valPairs(valFreq.begin(), valFreq.end());
        // sort(valPairs.begin(), valPairs.end(), [](const pair<int, int>& a, const pair<int, int>& b){return a.second > b.second;
        //     return a.second > b.second;
        // });

        // vector<int> result;
        // for (const auto& i:valPairs){
        //     if (result.size()<k){
        //         result.push_back(i.first);
        //     } else {
        //         break;
        //     }
            
        // }
        // return result;
        // Overall time complexity: O(NlogN)



        // To make better time complexity: use count sort for frequency, 
        /*
        Count the frequency of each element and store it in map. O(N)
        use vector<vector> of size equal size to nums, here what we     will be doing is to consider index as frequency and value as list of elements which occurred that number of times. O(N).
Then iterate through this list to get the 1st k elements (start from last of vector) O(N+M)
.. Kinda like count sorting
        */
        unordered_map<int, int> valFreq;
        // loop O(N) 
        for (int i=0; i<nums.size(); i++){
            valFreq[nums[i]]++;
        }
        vector<vector<int>> freqVals(nums.size()+1, vector<int>());

        // for (auto i:valFreq){
        //     cout<<i.first<<" : "<<i.second<<endl;
        // }

        for (const auto& i:valFreq){
            freqVals[i.second].push_back(i.first);
        }

        // for (int i=0; i<freqVals.size(); i++){
        //     cout<<"Frequency "<<i<<" : ";
        //     for (int j=0; j<freqVals[i].size(); j++){
        //         cout<<freqVals[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        
        vector<int> re;
        for (int i=freqVals.size()-1; i>0; i--){
            for (int ele:freqVals[i]){
                if (re.size()<k){
                    re.push_back(ele);
                }
            }
        }

        return re;
        
        
        
        
        
        
      
        
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
        
        

    }
};