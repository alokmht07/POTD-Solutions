class Solution
{
public:
    int wordBreak(string A, vector<string> &B)
    {
        int n = A.length();

        unordered_set<string> dict(B.begin(), B.end());

        vector<bool> dp(n + 1, false);
        dp[0] = true; 

        for (int i = 1; i <= n; ++i)
        {
            for (int j = i - 1; j >= 0; --j)
            {
                if (dp[j])
                {
                    string word = A.substr(j, i - j);
                    if (dict.find(word) != dict.end())
                    {
                        dp[i] = true;
                        break;
                    }
                }
            }
        }

        return dp[n] ? 1 : 0;
    }
};

