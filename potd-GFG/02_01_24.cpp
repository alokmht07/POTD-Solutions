class Solution
{
public: 
    #define ll long long int
    ll maxSumWithK(ll a[], ll n, ll k) 
    {
        ll maxi = LONG_MIN, sum = 0, prevSum = 0;
        int j = 0;
        
        for(int i = 0; i < k; i++)  
            sum += a[i];
            
        maxi = max(maxi, sum);
        for(int i = k; i < n; i++)
        {
            sum += a[i];
            prevSum += a[j++];
            maxi = max(maxi, sum);
            
            if(prevSum < 0) 
            {
                sum -= prevSum;
                maxi = max(maxi, sum);
                prevSum = 0;
            }
        }
        
        return maxi;
    }
};