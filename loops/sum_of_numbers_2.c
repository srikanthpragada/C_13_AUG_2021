#include <stdio.h>

void main()
{
  int fn,sn, sum = 0;

     printf("Enter two numbers :");
     scanf("%d%d",&fn,&sn);

     while(fn <= sn)
     {
        sum += fn;
        fn ++;
     }

     printf("Sum = %d",sum);
}
