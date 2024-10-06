class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
      
            int n1=0;
            int n2=0;
            vector<int> result;
    
            while (n1<nums1.size() && n2<nums2.size()){
                if (nums1[n1]==nums2[n2]) {
                    result.push_back(nums1[n1]);
                    nums1.erase(nums1.begin()+n1);
                    nums2.erase(nums2.begin()+n2);
                    cout<<nums1.size()<<" "<<n1;
                   
                        n1=0;
                        n2=0;
                    
                } else {
                    n1++;
                    if (n1==nums1.size()) {
                        n1=0;
                        n2++;
                    }
                }

            }
            return result;
    }
};