// Take a number and display factors

#include <stdio.h>

void main()
{
  int num,i, prime = 1;

     printf("Enter a number :");
     scanf("%d",&num);

     for(i = 2; i <= num/2; i ++)
     {
         if(num % i == 0)
         {
           printf("Not prime");
           prime = 0;  // false
           break;
         }
     }

     if (prime)
        printf("Prime");

}
