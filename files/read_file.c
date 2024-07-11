// Take filename and display its contents

#include <stdio.h>

void main()
{
  FILE * fp;
  char filename[30];
  char ch;


      printf("Enter filename :");
      gets(filename);


      fp = fopen(filename, "rt");
      if(fp == NULL)   // file not found
      {
          printf("Sorry! File cannot be opened!");
          exit(1);  // Exit with error
      }


      while(1)
      {

          ch = fgetc(fp);
          if (ch == EOF)  // end of file
             break;

          putch(ch);
      }

      fclose(fp);
}
