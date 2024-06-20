#include <stdio.h>

void main()
{
 int a[5],i;


     srand(time(0));

     for(i = 0; i < 5; i ++)
     {
       a[i] = rand() % 50;
       printf("%d\n", a[i]);
     }
}
