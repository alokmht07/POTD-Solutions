class Solution {
  public:
    string removeKdigits(string S, int K) {
        string ans ; 

        for (char c : S) {
            while (ans.length() && ans.back() > c && K) {
                // cout<<ans.back()<<" "<<c<<endl;
                ans.pop_back(); 
                K--;   
            }

            if (ans.length() || c != '0') {
                ans.push_back(c);
                // cout<<ans<<endl;
            } 
        }

        while (ans.length() && K--) {
            ans.pop_back();
        } 
        return ans.empty() ? "0" : ans;
    }
};