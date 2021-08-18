// Program to calculate net price with 10% discount

#include <stdio.h>

void main()
{
   int price,discount,netprice;

     // Input
     printf("Enter price :");
     scanf("%d", &price);

     // Process
     discount = 10 / 100  * price;   //  price * 0.10
     netprice = price - discount;

     // Output
     printf("Selling Price     : %5d\n", price);
     printf("- Discount        : %5d\n", discount);
     printf("                    -----\n");
     printf("Net price         : %5d\n", netprice);
}
