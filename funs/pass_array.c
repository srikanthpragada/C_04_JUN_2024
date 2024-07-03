#include <stdio.h>

void print(int a[5])
{
 int i;

     for(i = 0; i < 5; i ++)
     {
       printf("%5d", a[i]);
     }
}


void main()
{
  int arr[] = {1,2,3,4,5};
  int marks[] = {50,66,77,88,34};

     print(arr);
     print(marks);

}
