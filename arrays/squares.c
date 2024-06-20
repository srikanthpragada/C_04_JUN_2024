#include <stdio.h>

void main()
{
 int squares[5],n,i;

     for(i = 0; i < 5; i ++)
     {
       printf("Enter number :");
       scanf("%d", &n);
       squares[i] = n * n;
     }

     for(i = 0; i < 5; i ++)
     {
       printf("%5d", squares[i]);
     }
}
