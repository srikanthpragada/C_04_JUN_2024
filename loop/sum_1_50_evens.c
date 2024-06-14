// Print sum of evens between 1 and 50

#include <stdio.h>

void main()
{
  int n,total = 0;


     for(n = 2; n <= 50 ; n +=2)
     {
         total = total + n;
     }

     printf("Total = %d", total);
}
