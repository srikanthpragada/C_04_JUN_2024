// Take 10 numbers or until 0 and display total

#include <stdio.h>

void main()
{
  int total = 0, i, num;

     for(i=1; i <= 5; i ++)
     {
        printf("Enter number [0 to stop] :");
        scanf("%d",&num);

        if(num == 0)
           break;

        total += num;
     }

     printf("Total = %d, Average = %d", total, total / (i - 1));

}
