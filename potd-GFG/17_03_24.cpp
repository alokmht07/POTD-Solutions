class Solution{
  public:
    int countPairs(struct Node* head1, struct Node* head2, int x) {
        // Code here
        int cnt = 0;
        unordered_set<int> set2;
        while (head2 != nullptr) {
            set2.insert(head2->data);
            head2 = head2->next;
        }
        while (head1 != nullptr) {
            int complement = x - head1->data;
            if (set2.find(complement) != set2.end()) {
                cnt++;
            }
            head1 = head1->next;
        }
        return cnt;
    }
};