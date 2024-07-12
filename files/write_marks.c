// Write 50 marks into marks.dat

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define FILENAME  "marks.dat"

void main()
{
  FILE * fp;
  int marks, i;


      fp = fopen(FILENAME, "wb");
      if(fp == NULL)   // file not found
      {
          printf("Sorry! File cannot be opened!");
          exit(1);  // Terminate program with error
      }


      srand(time(0));
      for(i = 1; i <= 50; i ++)
      {
          marks = rand() % 100;
          fwrite(&marks,sizeof(marks),1, fp);
      }

      fclose(fp);
}
