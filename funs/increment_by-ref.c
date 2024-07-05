#include <stdio.h>


void increment(int * p)
{
    *p = *p + 1;
}


void main()
{
  int v = 100;

    increment(&v);
    printf("%d ", v);
}
