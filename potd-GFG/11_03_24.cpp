class Solution{
public:
 
int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int n, int x){
        int cnt = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                int a = mat1[i][j];
                int i2=0,j2=n-1;
                while(i2<n && a+mat2[i2][j2] < x) i2++;
                if(i2<n){
                    while(j2>=0 && mat2[i2][j2]+a > x) j2--;
                    if(j2>=0 && mat2[i2][j2]+a==x) cnt++;
                }
            }
        }
        return cnt;
}
};