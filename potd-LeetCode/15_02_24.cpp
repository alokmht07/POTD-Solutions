class Solution {
public:
int isPossible(vector<vector<int>>paths){
    for(int i=0;i<paths.size();i++){
        int ans=0;
        for(int j=0;j<paths.size();j++){
            if(paths[i][j]==1)
            ans++;
        }
        if(ans%2==1)return 0;
    }
    return 1;
}
 
};