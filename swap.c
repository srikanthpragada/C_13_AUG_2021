// Swap numbers

#include <stdio.h>

void main()
{
  int a,b;

     printf("Enter two numbers :");
     scanf("%d%d",&a,&b);

     b = a;
     a = b;

     printf("%d %d",a,b);

}
