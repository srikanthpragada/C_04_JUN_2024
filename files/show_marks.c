// Write 50 marks into marks.dat

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define FILENAME  "marks.dat"

void main()
{
  FILE * fp;
  int marks, count, rollno, pos;


      fp = fopen(FILENAME, "rb");
      if(fp == NULL)   // file not found
      {
          printf("Sorry! File cannot be opened!");
          exit(1);  // Terminate program with error
      }

      while(1)
      {
         printf("Enter rollno [0 to stop] :");
         scanf("%d", &rollno);

         if(rollno == 0)
              break;

         // calculate position
         pos = (rollno - 1) * sizeof(marks);

         // Move file pointer to required location
         fseek(fp, pos, SEEK_SET);

         count = fread(&marks,sizeof(marks),1, fp);
         if (count == 0)  // EOF
             printf("Sorry! Invalid rollno.\n");
         else
             printf("Marks : %d\n", marks);
      }


      fclose(fp);
}
