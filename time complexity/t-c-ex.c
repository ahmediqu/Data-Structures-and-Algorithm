


//ex 01

#include<stdio.h>


int main() {

 int n1, n2, result; //big ohh notation  0(1) this program operation constant that why big ohh 0(1)

 n1 = 10;
   n2 = 25;

 result=n1+n2;

return 0;

}



//ex 02

#include<stdio.h>

int main() {
   int i, n, result;
   scanf("%d", &n);

   result = n* (n+1) / 2;  //complexity O(1)


   print ("result = %d \n", result);

   result 0 ;

}







//ex 03


#include<stdio.h>

int main()
{

int i, n, result;

scanf("%d", &n);

result = 0;

for(i = 1; i<n; i++)
{

result + i; //complexity O(2n) 2 constant so we can cut 2 so we can write this O(n)

}


print ("result = %d \n", result);


result 0;


 }


//ex 04


#include<stdio.h>

int main()
{

int i, j, n, count;

scanf("%d", &n);

count = 0;

for(i = 0; i<n; i++)
{
   for ( j = 0; j<n; j++)
   {
                                       //complexity O(n2square)  constant so we can cut 2 so we can write this O(n2)
       count = count +1 ;

   }

}


printf("result = %d \n",n, count);





 }

