class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int firstNSum=0;
        int n=nums.size();
        firstNSum= n*(n+1)/2;

        int arrSum=0;
        for (int i:nums) arrSum+=i;

        int missingNum = firstNSum-arrSum;
        return missingNum;
        
    }
};