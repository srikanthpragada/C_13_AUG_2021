//  Print 1 to 5 in 5 lines
#include <stdio.h>

void main()
{
  int i,j;

     for(i = 1; i <= 5;  i ++)
     {
        for(j = 1; j <= 5 ; j++)
        {
            printf("%5d",j);
        } // inner for

        printf("\n");
     } // outer for
}
