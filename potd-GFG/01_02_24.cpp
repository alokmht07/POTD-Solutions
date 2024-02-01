class Solution
{
  public:
    //Function to check if a string is Pangram or not.
    bool checkPangram (string s) {
        // your code here
         for(int i=0;i<s.length();i++){
            s[i]=tolower(s[i]);
        }
        vector<char>checked(256,false);
        for(int i=0;i<s.length();i++){
            checked[s[i]]=true;
        }
        for(int i='a';i<='z';i++){
            if(!checked[i]){
                return false;
            }
        }
        return true;
    }

};