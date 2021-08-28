#include <stdio.h>

void main()
{
  int n,i;

     printf("Enter number :");
     scanf("%d",&n);

     i = 2;
     while(i <= n)
     {
        printf("%d ", i);
        i += 2;
     }
}
