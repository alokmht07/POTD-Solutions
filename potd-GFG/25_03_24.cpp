class Solution {
public:   
   void helper(int n, string s, vector<string>&ans){
       if(n==0) {
           int noz=0;
           int noo=0;
           bool flag=true;
           for(int i=0;i<s.length();i++){
               if(s[i]=='1') noo++;
               if(s[i]=='0') noz++;
               if(noo<noz) flag=false;
           }
          if(flag) ans.push_back(s);
           return;
       }
       helper(n-1, s+ "1", ans);
       helper(n-1, s+ "0", ans);
   }
 
    vector<string> NBitBinary(int n)
    {
        // Your code goes here
        vector<string>ans;
        helper(n, "", ans);
            return ans;
    }
};