#include <stdio.h>


void main()
{

    printf("%d ", count_digits("Abc123"));
    printf("%d ", count_digits("Xyz"));

}


int count_digits(char st[20])
{
 int i, count = 0;


     for(i = 0; st[i] != '\0'; i ++)
     {
        if (isdigit(st[i]))
             count ++;
     }

     return count;
}
