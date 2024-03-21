class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
        // Code here
        vector<int>ans;
        stack<Node*>s1,s2;
        if(root) s1.push(root);

        while(!s1.empty() || !s2.empty()){
            while(!s1.empty()){
                Node* top=s1.top();
                ans.push_back(top->data);
                s1.pop();
                if(top->left) s2.push(top->left);
                if(top->right) s2.push(top->right);
            }            
            while(!s2.empty()){
                Node* top=s2.top();
                ans.push_back(top->data);
                s2.pop();
                if(top->right) s1.push(top->right);
                if(top->left) s1.push(top->left);
            }
        }
        return ans;
    }
};