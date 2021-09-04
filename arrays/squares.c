#include <stdio.h>

void main()
{
  int arr[5],i;


      for(i = 0; i < 5; i ++)
      {
        printf("Enter a number :");
        scanf("%d",&arr[i]);
      }

      for(i = 0; i < 5;  i ++)
        printf("%5d  %5d\n", arr[i], arr[i] * arr[i]);

}
