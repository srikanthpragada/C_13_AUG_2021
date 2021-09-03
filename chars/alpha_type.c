#include <stdio.h>

void main()
{
  char ch;

       printf("Enter a alpha :");
       ch = getche();

       if (ch >= 65 && ch <= 90)
          printf("Uppercase");
       else
          printf("Lowercase");
}
