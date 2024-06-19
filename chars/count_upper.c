#include <stdio.h>

void main()
{
  char ch, i, count = 0;

     for(i = 1; i <= 5; i ++)
     {
       printf("\nEnter alphabet :");
       ch = getche();

       if(isupper(ch))
         count ++;
     }

     printf("\nCount = %d", count);

}
