class Solution {
public:
	int sumOfPowers(int a, int b){
	    // Code here
	     int cnt=0;
        for(int i=a ; i<=b ; i++)
        {
            int num=i;
            for(int j=2; j*j<=num ; j++)
            {
                while(num%j==0)
                {
                    cnt++;
                    num/=j;
                }
            }
            if(num>1)
           cnt++;
        }
        return cnt;
	}
};