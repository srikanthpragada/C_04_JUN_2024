// Take filename and display its contents with line numbers

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main()
{
  FILE * fp;
  char filename[30];
  char line[100], *p;
  int lineno = 1;


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
           p = fgets(line, 100, fp);
           if(p == NULL)  // EOF
              break;

           printf("%3d: %s", lineno, line);
           lineno++;
      }

      fclose(fp);
}
