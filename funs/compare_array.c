
#include <stdio.h>


int compare(int a1[5], int a2[5])
{
 int i;

    for(i = 0; i < 5; i ++)
    {
        if(a1[i] !=  a2[i] )
             return 0;
    }

    return 1; // equal
}


void main()
{
  int a[] = {1,2,3,4,5};
  int b[] = {1,4,3,4,5};

    printf("%d ", compare(a,b));
}
