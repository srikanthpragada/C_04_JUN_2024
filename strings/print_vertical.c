#include <stdio.h>

void main()
{
  char name[20], i;

    printf("Enter name :");
    gets(name);

    for(i = 0; name[i] != 0 ; i ++)
    {
       printf("%c\n", name[i]);
    }

}
