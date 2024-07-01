#include <stdio.h>

void main()
{
 int a[5][5],i,j, found = 0, n;


     srand(time(0));

     for(i = 0; i < 5; i ++)
     {
       for(j = 0; j < 5; j ++)
       {
          a[i][j] = rand() % 50;
          printf("%5d", a[i][j]);
       }
       printf("\n");
     }


     printf("Enter a number : ");
     scanf("%d",&n);

     for(i = 0; i < 5; i ++)
     {
       for(j = 0; j < 5; j ++)
       {
          if (a[i][j] == n) // found
          {
              printf("Found at %d, %d\n", i,j);
              found = 1;
              break; // terminate inner loop
          }
       }

       if(found)
           break; // terminate outer loop

     }
}
