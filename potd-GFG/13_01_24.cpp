class Solution
{
    public:
    Node* insert(Node*head,Node*target){
        Node*t = head;
        Node*prev=nullptr;
        while(t and t->data<=target->data){
            prev=t;
            t = t->next;
        }
        if(t==nullptr){
            prev->next=target;
            target->next=nullptr;
            return head;
        }
        else if(prev==nullptr){
            target->next = head;
            return target;
        }
        else{
            Node*y = prev->next;
            prev->next=target;
            target->next=y;
            return head;
        }
    }
    Node* insertionSort(struct Node* head)
    {
        if(head==nullptr){
            return head;
        }
        Node*t = head;
        Node*next = head->next;
        t->next=nullptr;
        while(next!=nullptr){
            Node*targ = next;
            next = next->next;
            t = insert(t,targ);
            Node*cp  = t;
        }
        return t;
    }
    
};