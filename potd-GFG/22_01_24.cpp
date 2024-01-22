class Solution{
    public:
    vector<int>ans;
    vector<vector<int>>res;
    void helper(Node *root, int sum){
        if(!root)
        return;
        
        sum -= root->key;
        ans.push_back(root->key);
        
        if(sum == 0){
            res.push_back(ans);
        }
        
        helper(root->left,sum);
        helper(root->right,sum);
        
        ans.pop_back();
    }
    vector<vector<int>> printPaths(Node *root, int sum)
    {
        //code here
        helper(root,sum);
        return res;
    }
};