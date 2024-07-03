#include <stdio.h>

void main()
{
  char name[20];
  int count = 0, total_length = 0;


    while(1)
    {
      printf("Enter name [end to stop]:");
      gets(name);

      if(stricmp(name, "end") == 0)
          break;

      count ++;
      total_length += strlen(name);
    }

    printf("Avg. Length = %d", total_length / count);


}
