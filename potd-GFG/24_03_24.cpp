class Solution{
public:
    stack<int> insertAtBottom(stack<int> st,int x){
        stack<int>s2;
        while(!st.empty())
        {
            s2.push(st.top());
            st.pop();
        }
        st.push(x);
        while(!s2.empty())
        {
            st.push(s2.top());
            s2.pop();
        }
        return st;
    }
};