class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int l=0;
        int r=nums.size()-1;
        vector<double> ree;
        while (l<r){
            double re = (((double)nums[l]+(double)nums[r])/(double)2);
            ree.push_back(re);
            l++;
            r--;
        }
        sort(ree.begin(), ree.end());
        return ree[0];
    }
};