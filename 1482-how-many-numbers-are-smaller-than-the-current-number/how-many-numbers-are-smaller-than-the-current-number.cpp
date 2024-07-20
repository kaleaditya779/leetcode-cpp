class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size();
        vector<int> re(n, 0);
        // for (int i=0; i<n; i++){
        //     int count=0;
        //     int m=0;
        //     if (m==n-1) continue;
        //     if (nums[m] < nums[i]){
        //         re[i]++; m++;
        //     }
        // }

        int i=0;
        int m=0;
        while (i<=n-1){
            
            if (m==n) {
                i++;
                m=0;
                continue;
            }
            if (nums[m]<nums[i]){
                re[i]++; 
                m++;
            } else {
                m++;
                continue;
            }
        }
        return re;
    }
};