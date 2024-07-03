#include <stdio.h>

void print_even(int start, int end)
{
  int i;

     for(i = start; i <= end; i ++)
     {
       if (i % 2 == 0)
         printf("%d ", i);
     }
}

void print_even2(int start, int end)
{
  int i;

     // if start is not even then take it to next even
     if(start % 2 != 0)
         start++;

     for(i = start; i <= end; i += 2)
     {
         printf("%d ", i);
     }
}

void main()
{
    print_even(10, 20);
    print_even2(25, 35);

}
