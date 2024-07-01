#include <stdio.h>

void main()
{
  char name[20], i;

    printf("Enter name :");
    gets(name);

    for(i = 1; i <= 5; i ++)
    {
       // printf("%s\n", name);
       puts(name);
    }

}
