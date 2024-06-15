// Take 2 numbers and display sum of numbers between them

#include <stdio.h>

void main()
{
  int num1, num2, i, total = 0;

     printf("Enter two numbers :");
     scanf("%d%d",&num1, &num2);

     for(i = num1; i <= num2; i ++)
     {
         total += i;
     }

     printf("Total = %d", total);

}
