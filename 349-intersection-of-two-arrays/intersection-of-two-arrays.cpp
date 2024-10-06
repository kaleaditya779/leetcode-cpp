class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
               
        
            unordered_set<int> se1;
            unordered_set<int> se2;
            for (auto i:nums2){
                se2.insert(i);
            }
            for (auto i:nums1){
                se1.insert(i);
            }

            vector<int> result;
            for (auto i: se2){
                if (se1.count(i)==1){
                    result.push_back(i);
                }
            }
            return result;
        
    }
};