#include <stdio.h>

struct time
{
   int h,m,s;
};


int total_seconds(struct time t)
{
  return   t.h * 3600 + t.m * 60 + t.s;
}

void print(struct time t)
{
   printf("%02d:%02d:%02d", t.h, t.m, t.s);
}

void main()
{
  struct time t[5];
  int i;

        srand(time(0));
        for(i = 0; i < 5; i ++)
        {
            t[i].h = rand() % 24;
            t[i].m = rand() % 60;
            t[i].s = rand() % 60;

            print(t[i]);
            printf(" %d\n", total_seconds(t[i]));
        }


}
