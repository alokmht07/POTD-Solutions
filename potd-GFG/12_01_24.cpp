class Solution
{
    public:
    
    // Function to reverse first k elements of a queue.
    queue<int> modifyQueue(queue<int> q1, int k)
    {
        stack<int>st;
        queue<int>q;
        while(k>0)
        {
            st.push(q1.front());
            q1.pop();
            k--;
        }
        while(!st.empty())
        {
            q.push(st.top());
            st.pop();
        }
        while(!q1.empty())
        {
           q.push(q1.front());
           q1.pop();
        }
        return q;
        
    }
};