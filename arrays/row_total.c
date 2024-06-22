#include <stdio.h>

void main()
{
 int a[4][4],i,j, total;


     srand(time(0));

     for(i = 0; i < 4; i ++)
     {
       total = 0;
       for(j = 0; j < 4; j ++)
       {
          a[i][j] = rand() % 10;
          total += a[i][j];
          printf("%5d", a[i][j]);
       }
       printf("%5d\n", total);
     }

}
