// Take numbers until 0 and display sum

#include <stdio.h>

void main()
{
  int num, total = 0, i;

     while(1)
     {
          printf("Enter number :");
          scanf("%d",&num);
          if (num == 0)
              break;

          total += num;
     }

     printf("Total = %d", total);
}
