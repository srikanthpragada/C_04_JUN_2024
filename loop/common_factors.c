// Take two numbers and display common factors

#include <stdio.h>

void main()
{
  int num1, num2, smallest, i;

     printf("Enter two numbers :");
     scanf("%d%d",&num1, &num2);

     smallest = num1 < num2 ? num1 : num2;

     for(i = 2; i <= smallest/2; i ++)
     {
         if(num1 % i == 0 && num2 % i ==0) {
           printf("%d ",i);
         }
     }
}
