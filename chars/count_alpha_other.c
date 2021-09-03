#include <stdio.h>

void main()
{
  char ch;
  int i, alpha = 0, other = 0;

      printf("Enter chars :");
      for(i = 1; i <= 5; i ++)
      {
        ch = getche();
        putch('*');

        // if (isalpha(ch))

        if (ch >= 65 && ch <= 90 || ch >= 97 && ch <= 122)
           alpha++;
        else
           other++;
      }

      printf("\nAlpha = %d, Others = %d", alpha, other);
}
