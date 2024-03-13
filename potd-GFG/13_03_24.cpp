class Solution{
  public:
     vector<int> matrixDiagonally(vector<vector<int>>&mat)
    {
         //Your code here
        vector<int> res;
        int N = mat.size();
        for(int s = 0; s <= N + N - 2; ++s)
        {
            // for all i + j = s
            for(int x = 0; x <= s; ++x) 
            {
                int i = x;
                int j = s - i;
                if(s % 2 == 0) swap(i, j);

                if(i >= N || j >= N) continue;
                
                res.push_back(mat[i][j]);
            }
        }
        
        return res;
    }
};