class Solution {
public:
    bool isEvenOddTree(TreeNode* root) {
        vector<TreeNode*> q{root};
        int level = -1; 

        while (!q.empty()) {
            ++level; 
            int prevValue = 0; 
            vector<TreeNode*> nextLevel;

            for (auto node : q) {
                if (node != nullptr) {
                    if (node->val % 2 == level % 2)
                        return false;

                    if (prevValue != 0 && ((level % 2 && prevValue <= node->val) || (!(level % 2) && prevValue >= node->val)))
                        return false;

                    prevValue = node->val;

                    nextLevel.push_back(node->left);
                    nextLevel.push_back(node->right);
                }
            }

            swap(q, nextLevel);
        }

        return true;
    }
};