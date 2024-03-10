class Solution{
public:
	string removeDuplicates(string str) {
        // code here
        vector<int> v(256, 0);
        string res = "";
        for(int i=0;i<str.size();i++){
            int idx = str[i];
            if(v[idx]==0) res += str[i];
            v[idx]++;
        }
        return res;
    }
};