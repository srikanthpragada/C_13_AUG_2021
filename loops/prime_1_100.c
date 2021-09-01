// Take 10 numbers or until 0 is given
#include <stdio.h>

void main()
{
  int n,i, prime;

     for(n = 1; n < 1000; n += 2 )
     {
        prime = 1;
        for(i = 2; i <= n/2 ; i++)
        {
            if (n % i == 0)
            {
                prime = 0;
                break;
            }
        } // inner for

        if(prime)
             printf("%5d", n);
     } // outer for

}
