class Solution
{
public:
    int fun(int i,int j,vector<vector<int>>&mat,vector<vector<int>>&vi){
        
        int n=mat.size();
        int m=mat[0].size();
        
        if(j==m-1) {
            
            if(mat[i][j]==1 && !vi[i][j]) return 0;
            else return 1e9;
        }
        int ans=1e9;
        vi[i][j]=1;
        
        int X[4]={-1,0,1,0};
        int Y[4]={0,-1,0,1};
        
        for(int p=0;p<4;p++){
            int newx=i+X[p];
            int newy=j+Y[p];
            
            if( newx>=0 && newx<n && newy>=0 && newy<m && mat[newx][newy]==1 && !vi[newx][newy]){
                int len=1+fun(newx,newy,mat,vi);
                ans=min(ans,len);
            }
        }
        
         vi[i][j]=0;
         
         return ans;

    }
    int findShortestPath(vector<vector<int>> &mat)
    {
        int n=mat.size();
        int m=mat[0].size();
        
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==0){
                    if(i-1>=0) mat[i-1][j]=-1; //up
                    if(i+1<n) mat[i+1][j]=-1;  //down
                    if(j+1<m) mat[i][j+1]=-1;  //right
                    if(j-1>=0) mat[i][j-1]=-1;  //left
                }
            }
        }
        
        vector<vector<int>>vi(n,vector<int>(m,0));
        int ans=1e9;
        for(int i=0;i<n;i++){
           if(mat[i][0]==1){
            int len=fun(i,0,mat,vi);
            ans=min(ans,len);
           }
        }
        if(ans==1e9) return -1;
        else return ans+1;
    }
};