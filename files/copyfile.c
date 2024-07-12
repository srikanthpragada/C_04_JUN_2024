// Take filename and count upper and lower letters

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main()
{
  FILE * sfp, * tfp;
  char sfilename[30], tfilename[30];
  char ch;

      printf("Enter source filename :");
      gets(sfilename);

      printf("Enter target filename :");
      gets(tfilename);

      // open source file in read mode
      sfp = fopen(sfilename, "rt");
      if(sfp == NULL)   // file not found
      {
          printf("Sorry! Source File cannot be opened!");
          exit(1);  // Terminate program with error
      }

      // open target file in write mode
      tfp = fopen(tfilename, "wt");
      if(tfp == NULL)   // file not found
      {
          printf("Sorry! Target File cannot be opened!");
          exit(2);  // Terminate program with error
      }


      while(1)
      {
          ch = fgetc(sfp);
          if (ch == EOF)  // end of file
             break;

          fputc(ch,tfp);
      }

      fclose(sfp);
      fclose(tfp);

      printf("File copied successfully!");

}
