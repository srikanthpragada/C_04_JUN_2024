#include <stdio.h>

void main()
{
 int a[4][4],i,j;


     srand(time(0));

     for(i = 0; i < 4; i ++)
     {
       for(j = 0; j < 4; j ++)
       {
          a[i][j] = rand() % 50;
       }
     }


     for(i = 0; i < 4; i ++)
     {
       for(j = 0; j < 4; j ++)
       {
         printf("%5d", a[i][j]);
       }
       printf("\n");
     }
}
