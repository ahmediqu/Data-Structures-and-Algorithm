
    int binary_search(int A[], int n, init x)
{
    int left, right, mid;
    left = 0
    right = n-1;

     while(left <= right){
    md = (left + right ) /2 ;
    if (A[mid] == x) {
        return mid;
    }     
          if(A[mid]< x) {
              left = mid + 1
               return i ;
          }
          else {
               right = mid -1 ;
          }
     }
        
         while(left <= right){
    md = (left + right ) /2 ;
    if (A[mid] == x) {
        return mid;
    }     
          if(A[mid]< x) {
              left = mid + 1
               return i ;
          }
          else {
               right = mid -1 ;
          }
     }
 return -1 ;

 }
