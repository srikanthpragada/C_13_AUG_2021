// Take numbers until 0 is given and then print sum of positive numbers

#include <stdio.h>

void main()
{
  int a = 0, b = 1, c, n = 1;

     printf("%5d%5d", a,b);

     for(n = 1; n <=  8; n ++)
     {
         c = a + b;
         printf("%5d", c);
         a = b;
         b = c;
     }
}
