#include <stdio.h>

void main()
{
  int arr[5] = {10,50,6,5,40};
  int i;

      for(i = 0; i < 5;  i ++)
        printf("%5d  %5d\n", arr[i], arr[i] * arr[i]);

}
