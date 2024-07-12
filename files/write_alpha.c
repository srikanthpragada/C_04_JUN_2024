// Take  alphabets into alpha.txt

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main()
{
  FILE * fp;
  char ch;


      fp = fopen("alpha.txt", "wt");
      if(fp == NULL)   // file not found
      {
          printf("Sorry! File cannot be opened!");
          exit(1);  // Terminate program with error
      }


      for(ch = 65; ch <= 90; ch ++)
           fputc(ch,fp);

      for(ch = 97; ch <= 122; ch ++)
           fputc(ch,fp);

      fclose(fp);
}
