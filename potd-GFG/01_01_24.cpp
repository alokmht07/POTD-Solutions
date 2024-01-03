class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        // Code here.
        unordered_map<int,int>mp;
        
        for(auto i:nums){
            mp[i%k]++;
        }
        if(mp[0]%2!=0) return false;
        
        for(int i=1; i<k ; i++){
            if(mp[i]!=mp[k-i]) return false;
        }
        
        return true;
    }
};