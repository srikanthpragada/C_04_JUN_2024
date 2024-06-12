//Take no. hours worked and display wage

#include <stdio.h>

void main()
{
  int hours, wage;


    printf("Enter hours:");
    scanf("%d", &hours);


    if (hours <= 8)
        wage = hours * 150;
    else
        wage = (8 * 150) + ((hours-8) * 200);


    printf("Wage : %d", wage);
}
