// Write 50 marks into marks.dat

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define FILENAME  "marks.dat"

void main()
{
  FILE * fp;
  int marks, count;


      fp = fopen(FILENAME, "rb");
      if(fp == NULL)   // file not found
      {
          printf("Sorry! File cannot be opened!");
          exit(1);  // Terminate program with error
      }

      while(1)
      {
         count = fread(&marks,sizeof(marks),1, fp);
         if (count == 0)  // EOF
            break;

         printf("%d ", marks);
      }

      fclose(fp);
}
