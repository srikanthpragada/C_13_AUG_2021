// Take numbers until 0 is given and then print sum of positive numbers

#include <stdio.h>

void main()
{
  int num,total = 0, count = 0;

     while(1)  // infinite loop
     {
         printf("Enter number [0 to stop] :");
         scanf("%d",&num);

         if(num == 0)
            break;

         if(num > 0)
         {
            total += num;
            count ++;
         }
     }

     printf("Average = %d", total / count);
}
