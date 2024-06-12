//Take no. hours worked and display wage

#include <stdio.h>

void main()
{
  int hours, wage;

    printf("Enter hours:");
    scanf("%d", &hours);

    wage = hours * 150;

    if (hours > 8)
        wage += (hours-8) * 50;

    printf("Wage : %d", wage);
}
