class Solution
{
    public:
        /*You are required to complete below method */
        int sum = 0;
        void solve(Node *root)
        {
            if(root->left == NULL and root->right == NULL)
            {
                sum += root->data;
                return;
            }
            if(root->left)
                solve(root->left);
            if(root->right)
                solve(root->right);
        }
        int sumOfLeafNodes(Node *root ){
            solve(root);
            return sum;
        }
};