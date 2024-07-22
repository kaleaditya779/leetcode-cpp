class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        sort(nums1.begin(), nums1.begin()+m);
        sort(nums2.begin(), nums2.end());
        // int total = m+n;
        vector<int> mergerBuddy;
        int m1=0;
        int m2=0;
        while (m1<m && m2<n) {
            if (nums1[m1]==nums2[m2]){
                mergerBuddy.push_back(nums1[m1]);
                mergerBuddy.push_back(nums1[m1]);
                m1++; m2++;
            } else if (nums1[m1]>nums2[m2]){
                mergerBuddy.push_back(nums2[m2]);
                m2++;
            } else if (nums1[m1]<nums2[m2]){
                mergerBuddy.push_back(nums1[m1]);
                m1++;
            }
        }
        while (m1<m){
            mergerBuddy.push_back(nums1[m1]);
            m1++;
        }
        while (m2<n){
            mergerBuddy.push_back(nums2[m2]);
            m2++;
        }
        // nums1.clear();
        // for (auto i:mergerBuddy){
        //     cout<<i<<" ";
        // }
        nums1 = mergerBuddy;
    }
};