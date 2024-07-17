class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector <int> ans(2*n);
        int e=0;
        for (int i=0; i<2*n; i++){
            if (i%2 == 0){
                ans[i] = nums[e];
                e++;
            } else {
                ans[i] = nums[e+n-1];
            }
        }
        return ans;
    }
};