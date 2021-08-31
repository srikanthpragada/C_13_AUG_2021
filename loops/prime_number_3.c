// Prime Number V3

#include <stdio.h>

void main()
{
  int num,i, prime = 1;

     printf("Enter a number :");
     scanf("%d",&num);

     for(i = 2; i <= num/2; i ++)
     {
          if (num % i == 0)
          {
            prime = 0; // false
            break;
          }

     }

     if (prime)
         printf("Prime Number!");
     else
         printf("Not a prime number");
}
