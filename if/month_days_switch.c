//Take month number and display number of days using switch

#include <stdio.h>

void main()
{
  int month, year;

    printf("Enter month [1-12]:");
    scanf("%d", &month);

    switch(month)
    {
      case 2:
             printf("Enter year :");
             scanf("%d",&year);

             if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
               printf("29");
             else
               printf("28");
             break;
      case 4:
      case 6:
      case 9:
      case 11:
             printf("30");
             break;
      default:
             printf("31");

    }
}
