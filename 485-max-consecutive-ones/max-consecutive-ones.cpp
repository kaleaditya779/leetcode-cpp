class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        if (n==1 && nums[0]==1) return 1;
        else if (n==1 && nums[0]!=1) return 0;

        int iter=0, count=0, Mcount=0;
        while (iter<n){
            if (nums[iter]==0){
                count=0;
                iter++;
            }
            else {
                // iter reached on 1
                count++;
                Mcount=max(count, Mcount);
                iter++;
            }
        }
        return Mcount;
    }
};