// Take 10 numbers and display sum of even numbers

#include <stdio.h>

void main()
{
  int num, i, total = 0;


     for(i = 1; i <= 10; i ++)
     {
       printf("Enter Number :");
       scanf("%d",&num);

       if(num % 2 == 0)
          total += num;
     }

     printf("Total = %d", total);

}
