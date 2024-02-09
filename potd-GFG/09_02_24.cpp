class Solution{
    public:
    void solve(Node* root,bool &res){
        if(!res) return;
        if(!root->left && !root->right) return;

        int val=root->data;
        int left=(root->left)?root->left->data:0;
        int right=(root->right)? root->right->data:0;

        res=(val==(left+right));

        if(root->left) solve(root->left,res);
        if(root->right) solve(root->right,res);
    }

    int isSumProperty(Node *root)
    {
     // Add your code here
        bool res=1;
        solve(root,res);
        return res;
    }
};