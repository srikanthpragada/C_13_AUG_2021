#include <stdio.h>

void main()
{
  int i,n,sum = 0;


     i = 1;
     while(i <= 5)
     {
        printf("Enter number :");
        scanf("%d",&n);
        sum += n;
        i ++;
     }

     printf("Sum = %d",sum);
}
