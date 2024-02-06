void find(Node *a, vector<vector<Node*>>& v, vector<Node*>& z) {
        if(a==NULL)
        return ;
        z.push_back(a);
        if (a->left == NULL && a->right==NULL) {
            v.push_back(z);
            
        }
        find(a->left, v, z);
        find(a->right, v, z);
        z.pop_back();
    }

    int printKDistantfromLeaf(Node* root, int k) {
        vector<vector<Node*>> v;
        set<Node*> s;
        vector<Node*> z;
        find(root, v, z);
        for (int i = 0; i < v.size(); i++) {
            int x = v[i].size();
            if (x - k > 0) {
                s.insert(v[i][x - k-1]);
            }
        }

        return s.size();
    }