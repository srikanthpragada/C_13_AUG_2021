// Program to take marks in two subjects and display total and avg

#include<stdio.h>

void main()
{
 int m1, m2, total, average;

    printf("Enter marks in two subjects :");
    scanf("%d%d",&m1,&m2);
    total = m1 + m2;
    average = total / 2;
    printf("Total = %d, Average  = %d", total, average);
}
