// Take base and power and display result

#include <stdio.h>

void main()
{
  int base,power, result, i;

     printf("Enter base and power :");
     scanf("%d%d",&base,&power);

     result = 1;

     for(i = 1; i <= power; i ++)
     {
         result = result * base;
     }

     printf("%d ", result);


}
