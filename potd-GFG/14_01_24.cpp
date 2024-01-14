class Solution
{   
    public:
    vector<int> repeatedRows(vector<vector<int>> &matrix, int M, int N) 
    { 
        // Your code here
       set<int>res;
        for(int i=0;i<M-1;i++)
        {
            for(int j=i+1;j<M;j++)
            {
                if(matrix[i]==matrix[j])
                    res.insert(j);
            }
        }
        
        vector<int>ans;
        for(auto i : res)
        {
            ans.push_back(i);
        }
        
        return ans;
    } 
};