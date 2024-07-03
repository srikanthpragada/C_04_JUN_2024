#include <stdio.h>

void main()
{
  char names[5][20];
  int i;


    for(i = 0; i < 5 ; i ++)
    {
      printf("Enter a string :");
      gets(names[i]);
    }

    for(i = 0; i < 5 ; i ++)
    {
      puts(strupr(names[i]));
    }

}
