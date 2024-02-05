class Solution
{
    public:
    Node *sortedInsert(Node* head, int data)
    {
       //Your code here
        Node *x = new Node(data);
        if (head == NULL) {
            x->next = x;
            return x;
        }
        Node *curr = head;
        if (head->data >= data) {
            x->next = head;
            while (curr->next != head) {
                curr = curr->next;
            }
            curr->next = x;
            return x;
        }
        while (curr->next != head && curr->next->data <= data) {
            curr = curr->next;
        }
        x->next = curr->next;
        curr->next = x;
        return head;
    }
};