// Take a number and  display whether it is perfect

#include <stdio.h>

void main()
{
  int num, i, total = 0;

     printf("Enter a number :");
     scanf("%d",&num);

     for(i = 1; i <= num/2; i ++)
     {
         if(num % i == 0)
           total += i;
     }

     if (total == num)
        printf("Perfect");
     else
        printf("Not perfect");

}
