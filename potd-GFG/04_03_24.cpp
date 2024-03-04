class Solution{
  public:
    void swapElements(int a[], int n){
        
         int p1 = 0; // Pointer 1
        int p2 = 2; // Pointer 2
        
        while (p1 < n && p2 < n) {
            swap(a[p1], a[p2]);
            p1 ++; 
            p2 ++;
        }
       
        
    }
};