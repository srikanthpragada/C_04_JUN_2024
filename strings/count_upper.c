#include <stdio.h>

void main()
{
  char name[20], count = 0, i;

    printf("Enter name :");
    gets(name);

    for(i = 0; name[i] != '\0' ; i ++)
    {
       if(isupper(name[i]))
          count ++;
    }

    printf("Uppercase Count = %d", count);
}
