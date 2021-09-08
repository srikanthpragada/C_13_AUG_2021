#include <stdio.h>

void main()
{
  char name[20];
  int i, count = 0;

     printf("Enter your name :");
     gets(name);

     for(i = 0; name[i] != '\0'; i ++)
     {
        if (isupper(name[i]))
            count ++;
     }

     printf("Upper count = %d", count);

}
