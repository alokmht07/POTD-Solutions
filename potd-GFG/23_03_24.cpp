class Solution {
  public:
    vector<int> Series(int n) {
        
        // Code here
         if(n==0)
         return {0};
          if(n==1)
         return {0,1};
         vector<int>ans(n+1);
         int mod=1e9+7;
         ans[0]=0;
         ans[1]=1;
         for(int i=2;i<=n;i++)
         {
             ans[i]=(ans[i-1]+ans[i-2])%mod; 
             
         }
         return ans;
    }
};