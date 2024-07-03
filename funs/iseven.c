#include <stdio.h>

int iseven(int num)
{
    if(num % 2 == 0)
        return 1;
    else
        return 0;
}


void main()
{
   printf("%d %d", iseven(10), iseven(11) );
}
