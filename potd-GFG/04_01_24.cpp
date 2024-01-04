//User function Template for C++

class Solution {
  public:
    int singleElement(int arr[] ,int N) {
        // code here
        sort(arr,arr + N);
        if(N==1) return arr[0];
         if(arr[0]!=arr[1]) return arr[0];
         if(arr[N-1]!=arr[N-2]) return arr[N-1];
         
         for(int i=1;i<N-1;i++){
             if(arr[i-1]!=arr[i] && arr[i]!=arr[i+1]) return arr[i];
         }
         return -1;
    }
};