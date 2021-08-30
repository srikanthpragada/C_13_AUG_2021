// Factors

#include <stdio.h>

void main()
{
  int num,i, fact = 1;

     printf("Enter a number :");
     scanf("%d",&num);

     for(i = 2; i <= num/2 ; i ++)
     {
          if (num % i == 0)
              printf("%3d ", i);
     }



}
