
#include <stdio.h>


int search(int a[10], int n)
{
 int i;

    for(i = 0; i < 10; i ++)
    {
        if(a[i] == n)
             return i;
    }

    return -1; // not found
}


void main()
{
  int arr[] = {1,2,3,4,5,7,8,9,44,55};

    printf("%d ", search(arr,10));
}
