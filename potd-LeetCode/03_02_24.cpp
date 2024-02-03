class Solution {
public:
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        int n = arr.size();
        vector<int> dp(n + 1, -1);

        return help(arr, k, n, dp);
    }

    int help(vector<int>& arr, int k, int i, vector<int>& dp) {
        if (i == 0) { 
            return 0;
        }

        if (dp[i] != -1) {
            return dp[i]; 
        }

        int curmaxi = 0, best = 0;

        for (int t = 1; t <= k && t <= i; ++t) { 
            curmaxi = max(curmaxi, arr[i - t]);  
            best = max(best, help(arr, k, i - t, dp) + curmaxi * t);  
        }

        dp[i] = best;
        return best;
    }
};