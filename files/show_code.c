// Take a filename and display its contents with line numbers
#include <stdio.h>

void main()
{
  FILE * fp;
  char filename[50], line[100], *p;
  int lineno =  1;

     printf("Enter filename : ");
     gets(filename);

     fp = fopen(filename,"rt");
     if(fp == NULL)
     {
        printf("Sorry! Could not open file!");
        return;  // stop program
     }

     while(1)
     {
         p = fgets(line,100,fp); // read a line
         if(p == NULL) // EOF
              break;
         printf("%3d: %s",lineno, line);
         lineno ++;
     }
     fclose(fp);
}
