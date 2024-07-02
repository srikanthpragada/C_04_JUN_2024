
#include <stdio.h>


// user-defined function
void line(char ch, int len)
{
  int i;

     for(i = 1; i <= len; i ++)
       putch(ch);
}

void main()
{
     line('*', 30);  // call to function
     printf("\nSrikanth Technologies\n");
     line('.',30);

}
