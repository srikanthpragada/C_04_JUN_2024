#include <stdio.h>

void main()
{
  char st[20], largest[20], i;


    //strcpy(largest, "");
    largest[0] = '\0';

    for(i = 1; i <= 5 ; i ++)
    {
      printf("Enter string :");
      gets(st);

      if(strcmp(st, largest) > 0)
            strcpy(largest, st);
    }

    printf("Largest = %s", largest);
}
