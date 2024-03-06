class Solution
{
    public:
         vector <int> search(string p, string t)
        {
            int n=t.size(),m=p.size(),i,j;
            vector<int> v;
            
            for(i=0;i<=n-m+1;i++)
            {
                for(j=0;j<m;j++)
                    if(t[i+j]!=p[j])
                        break;
                if(j==m)
                    v.push_back(i+1);
            }
            return v;
        }
     
};