#include <stdio.h>

// Function declaration or prototype declaration
float average(int, int);

void main()
{
float avg;

    avg = average(10,15); // Call function
    printf("%f", avg);
}

// Function Definition
float average(int a, int b)
{
   return (a + b) / 2.0;
}

