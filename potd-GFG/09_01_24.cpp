class Solution
{
    public:
        vector <int> search(string pat, string txt)
        {
            //code here
             vector<int>res;
            int n = txt.size();
            int m = pat.size();
            for(int i=0;i<n;i++){
                int z = i;
                for(int j=0;j<m;j++){
                    if(txt[z]==pat[j]){
                        z++;
                    }
                    else{
                        break;
                    }
                }
                if(z-i==m){
                    res.push_back(i+1);
                }
            }
            return res;
        }
     
};