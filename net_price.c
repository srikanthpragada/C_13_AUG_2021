// Program to calculate net price with 10% discount

#include <stdio.h>

void main()
{
   int price,discount,netprice;

     // Input
     printf("Enter price :");
     scanf("%d", &price);

     // Process
     discount = price * 10 / 100;   //  price * 0.10
     netprice = price - discount;

     // Output
     printf("Net price = %d", netprice);
}
