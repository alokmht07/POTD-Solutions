class Solution {
  public:
    int smallestSubstring(string S) {
        // Code here
        int zero=0;
        int one=0;
        int two=0;
        
        int ans = INT_MAX;//output
        int j = 0;//2nd starting index
        
        for(int i=0; i<S.size(); i++){
            
            if(S[i]=='0') zero++;
            else if(S[i]=='1') one++;
            else two++;
            
            while(zero>0 && one>0 && two>0){
                ans = min(ans, i-j+1);
                
                if(S[j]=='0') zero--;
                else if(S[j]=='1') one--;
                else two--;
                j++;
            }
            
        }
        if(ans==INT_MAX) ans=-1;
        return ans;
        
    }
};