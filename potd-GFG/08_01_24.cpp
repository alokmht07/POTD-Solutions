class Solution
{
    public:
    
    struct Node * mergeResult(Node *node1,Node *node2)
    {
        // your code goes here
         Node *result = NULL;
        while(node1!=NULL&&node2!=NULL)
        {
            
            if(node1->data<=node2->data)
            {
                
                Node *temp = node1->next;
                node1->next = result;
                result = node1;
    
                
                node1=temp;
            }else{
             
                Node *temp = node2->next;
                node2->next=result;
                result = node2;
    
                
                node2=temp;
            }
        }
    
      
    
        while(node1!=NULL)
        {
           
            Node *temp = node1->next;
            node1->next = result;
            result= node1;
            node1 = temp;
        }
    
        while(node2!=NULL)
        {
           
            Node *temp = node2->next;
            node2->next = result;
            result = node2;
            node2 = temp;
        }
     
        return result;
    }  
};