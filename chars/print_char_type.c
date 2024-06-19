#include <stdio.h>

void main()
{
  char ch;


     printf("Enter alphabet :");
     //scanf("%c",&ch);
     ch = getchar();

     if(ch >= 'A' && ch <= 'Z')
        printf("Uppercase letter %c with code %d", ch, ch);
     else
        printf("Lowercase");


}
