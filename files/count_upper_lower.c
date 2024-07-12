// Take filename and count upper and lower letters

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main()
{
  FILE * fp;
  char filename[30];
  char ch;
  int upper = 0, lower = 0;


      printf("Enter filename :");
      gets(filename);


      fp = fopen(filename, "rt");
      if(fp == NULL)   // file not found
      {
          printf("Sorry! File cannot be opened!");
          exit(1);  // Terminate program with error
      }


      while(1)
      {
          ch = fgetc(fp);
          if (ch == EOF)  // end of file
             break;

          if(isupper(ch))
               upper ++;
          else
             if(islower(ch))
                lower ++;

      }

      fclose(fp);

      printf("Upper count = %d, Lower Count = %d", upper, lower);
}
