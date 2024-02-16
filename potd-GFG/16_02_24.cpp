class Solution
{
public:
    Node* prev = NULL;
    void solve(Node* root){
        if(!root) return;
        solve(root -> right);
        root -> right = prev;
        if(prev) prev -> left = NULL;
        prev = root;
        solve(root -> left);
    }
    Node *flattenBST(Node *root)
    {
        solve(root);
        return prev;
    }
};