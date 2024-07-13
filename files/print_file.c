// Take filename and display its contents with line numbers

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main(int argc, char * argv[])
{
  FILE * fp;
  char line[100], *p;
  int lineno = 1;

      if(argc < 2)
      {
          printf("Usage: print_file  <filename>");
          exit(1);
      }


      fp = fopen(argv[1], "rt");
      if(fp == NULL)   // file not found
      {
          printf("Sorry! File %s cannot be opened!", argv[1]);
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
