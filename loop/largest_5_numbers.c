// Take 5 numbers and display the largest

#include <stdio.h>

void main()
{
  int num, largest = 0, i;

     for(i = 1; i <= 5; i ++)
     {
          printf("Enter number :");
          scanf("%d",&num);
          if (num > largest)
              largest = num;
     }

     printf("Largest = %d", largest);
}
