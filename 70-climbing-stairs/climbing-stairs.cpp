class Solution {
public:
    int climbStairs(int n) {
        if (n==0 || n==1) return 1; // since for 0,1 steps only one way possible

        // approach - if on nth step, the ways would be addtion of ways of n-1 and n-2 th steps.. (Top down approach)
        int dp[n+2];
        dp[0]=1, dp[1]=1;
        for (int i=2; i<=n; i++){
            dp[i]=dp[i-1]+dp[i-2]; // we can reach to i using i-1 or i-2

        }
        return dp[n];
    }
};