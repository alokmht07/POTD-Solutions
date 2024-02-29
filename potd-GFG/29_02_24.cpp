class Solution{
public:
    
    long long sumBitDifferences(int arr[], int n) {
        // code here
        long long ans = 0;
        for(int bit = 0; bit < 32 ; bit++)
        {
            int cnt = 0;
            for(int i = 0; i < n; i++)
            {
                if((arr[i]&(1<<bit)))
                {
                    cnt++;
                }
            }
            ans += 2LL*cnt*(n-cnt);
        }
        return ans;
    }
};