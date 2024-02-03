class Solution
{
    public:
        // Should return decimal equivalent modulo 1000000007 of binary linked list 
        long long unsigned int decimalValue(Node *head)
        {
           // Your Code Here
            long long unsigned int res=0;
           Node *curr=head;
           while(curr!=NULL){
               res=(res*2+curr->data)%1000000007;
               curr=curr->next;
           }
           return res;
        }
};