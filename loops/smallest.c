// Smallest of 5 numbers

#include <stdio.h>

void main()
{
  int num,i,smallest;

     for(i = 1; i <= 5; i ++)
     {
       printf("Enter a number :");
       scanf("%d",&num);
       if (i == 1)
          smallest = num;
       else
         if(num < smallest)
           smallest = num;
     }

     printf("Smallest = : %d", smallest);
}
