#include <stdio.h>

void main()
{
  char st[50], i;

    printf("Enter string :");
    gets(st);

    for(i = 0; st[i] != '\0' ; i ++)
    {
       if(st[i] == ' ')
           putch('\n');
       else
           putch(st[i]);
    }
}
