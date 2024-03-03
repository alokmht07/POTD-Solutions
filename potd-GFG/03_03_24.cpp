class Solution {
public:
	static bool comp(string a, string b){
	    return a + b > b + a;
	}
	
	string printLargest(int n, vector<string> &arr) {
	    sort(arr.begin(), arr.end(), comp);
	    
	    string ans;
	    for(string i : arr)
	        ans += i;
	    
	    return ans;
	}
};