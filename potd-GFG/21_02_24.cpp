class Solution{
public:
const int mod=1003;
int solve(string &s,int i,int j,vector<vector<vector<int>>>&dp,int istrue)
{
    if(i>j)
    {
        return 0;
    }
    if(dp[i][j][istrue]!=-1)
    {
        return dp[i][j][istrue];
    }
    if(i==j)
    {
       if(istrue)
       {
           if(s[i]=='T')
           {
               return 1;
               
           }
           else
           {
               return 0;
           }
       }
       else
       {
           if(s[i]=='F')
           {
               return 1;
           }
           else
           {
               return 0;
           }
       }
    }
    int count=0;
    for(int idx=i+1;idx<j;idx+=2)
    {
        int lt=solve(s,i,idx-1,dp,1)%mod;
        int lf=solve(s,i,idx-1,dp,0)%mod;
        int rt=solve(s,idx+1,j,dp,1)%mod;
        int rf=solve(s,idx+1,j,dp,0)%mod;
        if(s[idx]=='|')
        {   
            if(istrue)
            {
            count=(count%mod+(lt*rf)%mod +(lf*rt)%mod+(lt*rt)%mod)%mod;
            
             }
            else
            {
            count=(count%mod+(lf*rf)%mod)%mod;
            }
        }
        if(s[idx]=='&')
        {
            if(istrue)
            {
              count=(count%mod+(lt*rt)%mod)%mod;  
            }
            else
            {
                count=(count%mod+(lf*rt)%mod+(lt*rf)%mod+(lf*rf)%mod)%mod;
            }
        }
        if(s[idx]=='^')
        {
            if(istrue)
            {
                count=(count%mod+(lf*rt)%mod+(rf*lt)%mod)%mod;
            }
            else
            {
                count=(count%mod+(lt*rt)%mod+(lf*rf)%mod)%mod;
            }
        }
        }
        return dp[i][j][istrue]=count%mod;
    }

    int countWays(int n, string s){
        // code here
        vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(n+1,vector<int>(3,-1)));
        return solve(s,0,n-1,dp,1);
    }
};