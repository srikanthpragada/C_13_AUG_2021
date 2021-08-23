// Program to check whether a year is leap year

#include <stdio.h>

void main()
{
   int year;

     // Input
     printf("Enter year :");
     scanf("%d", &year);

     if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
           printf("Leap Year");
     else
           printf("Not a leap year");
}
