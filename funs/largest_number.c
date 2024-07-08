// Get largest number in an array

#include <stdio.h>


int largest(int a[5])
{
 int i, largest;

    largest = a[0];
    for(i = 1; i < 5; i ++)
    {
        if(a[i] > largest )
             largest = a[i];
    }

    return largest;
}


void main()
{
  int a[] = {1,20,3,4,5};


    printf("%d ",largest(a));
}
