class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string s) {
        //Your code here
         int length = s.length();
            int l = length;
            int n = 0;
            bool check = false;

            for(int i = 0; i < length; i++)
            {
                if(s[0] == '-' && check == false)
                {
                    l--;
                    check = true;
                    continue;
                }
                
                if ( !(s[i] >= '0' && s[i] <= '9') )
                {
                   return -1;
                }
                
                else
                {
                    int c  =(int)(s[i]) - 48;
                    n  = n + ( ( pow(10, l-1) ) *  c);
                    l--;
                }
            }
            
            if(s[0] == '-')
                return (-n);
                
            return n;
    }
};