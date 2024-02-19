class Solution{
public:
    int minValue(string s, int k){
        // code here
        unordered_map<char,int>mp;
        for(int i=0;i<s.length();i++) {
            mp[s[i]]++;
        }
        priority_queue<int>pq;
        for(auto it:mp) {
            pq.push(it.second);
        }
        while(k--) {
            int maxi = pq.top();
            pq.pop();
            pq.push(maxi-1);
        }
        int sum=0;
        while(!pq.empty()) {
            int val = pq.top();
            pq.pop();
            sum += pow(val,2);
        }
        return sum;
    }
};