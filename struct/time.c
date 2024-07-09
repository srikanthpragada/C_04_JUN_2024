// Time operations

struct time
{
   int h, m, s;
};

int totalseconds(struct time t)
{
   return  t.h * 3600 + t.m * 60 + t.s;
}

void print(struct time t)
{
   printf("%02d:%02d:%02d", t.h, t.m, t.s);
}

struct time max(struct time t1, struct time t2)
{
    return totalseconds(t1) > totalseconds(t2) ? t1 : t2;
}

int equals(struct time t1, struct time t2)
{
    return  totalseconds(t1) == totalseconds(t2) ? 1 : 0;
}

void main()
{
  struct time t1 = {10,00,0}, t2 = {12,2,3};
  struct time big;

     print(t1);
     printf("\nTotal Seconds : %d\n",  totalseconds(t1));

     big = max(t1, t2);
     print(big);
}
