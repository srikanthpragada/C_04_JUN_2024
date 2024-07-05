
#include <stdio.h>


void reverse(int num)
{
  if(num > 0)
  {
      printf("%d", num % 10);
      reverse(num/10);
  }

}

void print_reverse(int n)
{
    printf("%d ", n);
    if (n > 1)
         print_reverse(n - 1);
}


void main()
{
    //reverse(125);
    print_reverse(5);
}
