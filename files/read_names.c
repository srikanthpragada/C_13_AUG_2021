#include <stdio.h>

void main()
{
  FILE * fp;
  int ch;

        fp = fopen("names.txt","rt");
        if(fp == NULL)
        {
           printf("Sorry! Could not open file!");
           return;  // stop program
        }

        while(1)
        {
           ch = fgetc(fp);
           if (ch == EOF)  // -1
              break;
           putchar(toupper(ch));
        }

        fclose(fp);
}
