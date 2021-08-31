// Total of 5 numbers

#include <stdio.h>

void main()
{
  int num,i,total = 0;

     for(i = 1; i <= 5; i ++)
     {
       printf("Enter a number :");
       scanf("%d",&num);
       total += num;
     }

     printf("Total  : %d", total);
}
