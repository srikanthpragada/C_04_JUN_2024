// Take names and write them into names.txt

#include <stdio.h>

void main()
{
  FILE * fp;
  char names[5][20] = {"Bob", "Scott", "Jack", "Larry", "Jason"};
  int i;


      fp = fopen("names.txt", "wt");

      for(i = 0; i < 5; i ++)
      {
         fprintf(fp, "%s\n", names[i]);
      }


      fclose(fp);
}
