#include <stdio.h>

int isprime(int num)
{
 int i;

     for(i = 2; i <= num/2; i ++)
     {
         if (num % i == 0)
             return 0;
     }

     return 1;
}


void main()
{
   printf("%d %d", isprime(15), isprime(11) );
}
