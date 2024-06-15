// Take a number and display table

#include <stdio.h>

void main()
{
  int i, num;


     printf("Enter number :");
     scanf("%d",&num);

     for(i=1; i <= 10; i ++)
     {
       printf("%3d * %2d = %5d\n",num, i, num * i);
     }

}
