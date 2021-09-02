// Common factors of two numbers

#include <stdio.h>

void main()
{
  int num1,num2,i,smallest, found = 0;

     printf("Enter two numbers :");
     scanf("%d%d",&num1,&num2);

     smallest = num1 < num2 ? num1 : num2;

     for(i = 2; i <= smallest / 2; i ++)
     {
          if(num1 % i == 0 && num2 % i == 0)
          {
              printf("%d ", i);
              found = 1;
          }
     }

     if(!found)  //  found == 0
        printf("Sorry! No common factors found!");
}
