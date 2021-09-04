#include <stdio.h>

void main()
{
  char ch;
  int i;

      printf("Enter chars :");
      for(i = 1; i <= 10; i ++)
      {
        ch = getch();
        putch(toupper(ch));
      }

}
