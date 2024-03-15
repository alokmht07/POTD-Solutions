class Solution
{
    public:
    // your task is to complete this function
     Node* reverse(Node* head)
    {
        if(!head || !head->next)return head;
        
        Node* rest = reverse(head->next);
        head->next->next = head;
        head->next = NULL;
        return rest;
    }
    void sort(Node **head)
    {
        Node * first= new Node(0);
        Node * second= new Node(0);
        Node * start= *head,*f=first,*s=second;
        while(start){
            f->next=start;
            start=start->next;
            f=f->next;
            s->next=start;
            s=s->next;
            if(start)
                start=start->next;
        }
        s=reverse(second->next);
        f->next=s;
        *head=first->next;
    }
};