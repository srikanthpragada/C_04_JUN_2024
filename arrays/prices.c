#include <stdio.h>

void main()
{
 int prices[5],i;

     for(i = 0; i < 5; i ++)
     {
       printf("Enter price :");
       scanf("%d", &prices[i]);
     }

     for(i = 0; i < 5; i ++)
     {
       printf("%5d", prices[i]);
     }
}
