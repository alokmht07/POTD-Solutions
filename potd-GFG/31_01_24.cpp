class Solution {
public:
    unordered_map<string, bool> m;
    void insert(struct TrieNode *root, string s) {
        m[s] = 1;
    }
    bool search(struct TrieNode *root, string s) {
        return m[s];
    }
};