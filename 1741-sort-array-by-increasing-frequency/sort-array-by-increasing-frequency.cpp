class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        // map<int, int> valFreq;
        // for (int i=0; i<nums.size(); i++){
        //     valFreq[nums[i]]++;
        // }
        // vector<pair<int, int>> valFV;
        // copy(valFreq.begin(), valFreq.end(), back_inserter(valFV));
        // for (auto i:valFV){
        //     cout<<i.first<<": "<<i.second<<endl;
        // }
        
        vector<int> count(201, 0);
        for (int num : nums) {
            count[num + 100]++;
        }
        sort(nums.begin(), nums.end(), [&](int a, int b) {
            if (count[a + 100] == count[b + 100])
                return a > b;
            return count[a + 100] < count[b + 100];
        });
        return nums;












        // sort(nums.begin(), nums.end(), [&](int a, int b) {
        //     for (int i=0; i<valFV.size()-1; i++){
        //         if (valFV[i].first == a && valFV[i+1].first == b){
        //             if (valFV[i].second == valFV[i+1].second) {
        //                 return a>b;
        //             }
        //             else if (valFV[i].second < valFV[i+1].second) return true;
        //             else return false;
        //         }
        //         else return false;
        //     }
        //     return false;
        // });
        // sort(valFreq.begin(), valFreq.end(), [&](auto a, auto b){
        //     if (a.second == b.second){
        //         if (a.first > b.first) return true;
        //         else return false;
        //     } else if (a.second < b.second) {
        //         return true;
        //     } else return false;
        // })
        // for (int i=0; i<nums.size(); i++){
        //     valFreq[nums[i]]++;
        // }
        // vector<pair<int, int> > pairs; 
  
        // for (auto& it : valFreq) { 
        //     pairs.push_back(it); 
        // } 
        // sort(pairs.begin(), pairs.end(), [](auto& a, auto& b) { 
        // return a.second < b.second; });
        
        // // for (auto i:pairs){
        // //     cout<<i.first<<": "<<i.second;
        // // }
        // nums.clear();
        // int pS = pairs.size();
        // for (int i=0; i<pS-1; i++){
        //     if (pairs[i].second == pairs[i+1].second){
        //         // compare i.first then push which is bigger
        //         if (pairs[i].first < pairs[i+1].first) {
        //             nums.insert(nums.end(), pairs[i+1].first, pairs[i+1].second);
        //             pairs[i+1].second=0;
        //         } else {
        //             nums.insert(nums.end(), pairs[i].first, pairs[i].second);
        //             pairs[i].second=0;
        //         }
        //     } else {
        //         // directly push ith element..
        //         nums.insert(nums.end(), pairs[i].first, pairs[i].second);
        //         pairs[i].second=0;
        //     }
        // }

        return nums;
    }
};