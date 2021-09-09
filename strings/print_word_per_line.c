// Word per line
#include <stdio.h>

void main()
{
  char st[100];
  int i;

     printf("Enter a string :");
     gets(st);

     for(i = 0; st[i] != '\0'; i ++)
     {
        if(isspace(st[i]))
            putch('\n');
        else
            putch(st[i]);
     }



}
