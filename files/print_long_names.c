#include <stdio.h>

void main()
{
  FILE * fp;
  char name[30], *p;

        fp = fopen("names.txt","rt");
        if(fp == NULL)
        {
           printf("Sorry! Could not open file!");
           return;  // stop program
        }

        while(1)
        {
            p = fgets(name,30,fp); // read a line
            if(p == NULL) // EOF
                break;

            if (strlen(name) - 1  > 3)  // \n is part of string, so -1 for length
                printf("%s",name);
        }

        fclose(fp);
}
