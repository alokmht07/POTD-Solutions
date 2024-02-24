class Solution
{
    public:
        int maxSum(int n)
        {
            //code here.
            if(n == 0 or n == 1)
            return n;
            
            vector<int> dp(n + 1);
            dp[1] = 1;
            
            for(int i = 2; i <= n; i++) 
            {
                int sum = dp[i / 2] + dp[i / 3] + dp[i / 4];
                dp[i] = max(i, sum);
            }
            
            return dp[n];
        }
};