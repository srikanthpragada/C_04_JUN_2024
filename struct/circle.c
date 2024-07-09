
#include <stdio.h>

struct circle
{
    int x, y, r; // members
};

int area(struct circle c)
{
    return 3.14 * c.r * c.r;
}

struct circle max(struct circle c1, struct circle c2)
{
    if( area(c1) > area(c2))
        return c1;
    else
        return c2;
}


int equals(struct circle c1, struct circle c2)
{
    if(c1.x == c2.x && c1.y == c2.y && c1.r == c2.r)
        return 1;
    else
        return 0;
}

void main()
{
  struct circle c1,c2;
  struct circle c3 = {5,5,20};


      c1.x = 10;
      c1.y = 20;
      c1.r = 15;

      c2 = c1;

      if(equals(c1, c2))
        printf("Equal");
      else
        printf("Not Equal");

}
