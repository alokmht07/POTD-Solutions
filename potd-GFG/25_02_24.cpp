class Solution
{
    public:
    // Complete this function
     long long int count(long long int n)
    {
        long long int dp[n+1];
        memset(dp, 0, sizeof(dp));
        
        dp[0] = 1;

        for (long long int i = 3; i <= n; i++) {
            dp[i] += dp[i-3];
        }
        
        for (long long int i = 5; i <= n; i++) {
            dp[i] += dp[i-5];
        }

        for (long long int i = 10; i <= n; i++) {
            dp[i] += dp[i-10];
        }

        return dp[n];
    }
};