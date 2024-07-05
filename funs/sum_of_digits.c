#include <stdio.h>

int sum_of_digits(int num)
{
 int sum = 0;

     while(num > 0)
     {
         sum +=  num % 10;
         num /= 10;
     }

     return sum;
}


void main()
{
   printf("%d", sum_of_digits(1234));
}
