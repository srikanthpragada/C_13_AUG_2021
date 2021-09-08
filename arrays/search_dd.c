#include <stdio.h>

void main()
{
  int a[5][5];
  int i,j,n, found = 0;

       srand(time(0));

       for(i = 0; i < 5;i ++)
       {
         for(j = 0; j < 5; j ++)
         {
            a[i][j] = rand() % 100;
            printf("%5d", a[i][j]);
         }
         printf("\n");
       }

       printf("Enter a number :");
       scanf("%d",&n);

        for(i = 0; i < 5 && !found;i ++)
        {
         for(j = 0; j < 5; j ++)
         {
             if (a[i][j] == n)
             {
                 printf("Found at %d,%d", i,j);
                 found = 1;
                 break;
             } // if
         } // j loop
       } // i loop

       if (!found)
           printf("Sorry! Not found!");

}
