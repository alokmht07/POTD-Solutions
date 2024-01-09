class Solution {
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> nodeList_root1, nodeList_root2;
        findLeaf_dfs(root1, nodeList_root1);
        findLeaf_dfs(root2, nodeList_root2);
        return nodeList_root1 == nodeList_root2;
    }

    void findLeaf_dfs(TreeNode* nodeNow, std::vector<int>& nodeList) {
        if (!nodeNow) {
            return;
        }

        if (!nodeNow->left && !nodeNow->right) {
            nodeList.push_back(nodeNow->val);
            return;
        }

        findLeaf_dfs(nodeNow->left, nodeList);
        findLeaf_dfs(nodeNow->right, nodeList);
    }
};