#include <stdio.h>

void main()
{
  int arr[10],i;

      srand(time(0));

      for(i = 0; i < 10; i ++)
      {
        arr[i] = (rand() % 50) + 1;   // 1 - 50
      }

      for(i = 0; i < 10;  i ++)
        printf("%5d  %5d\n", arr[i], arr[i] * arr[i]);

}
