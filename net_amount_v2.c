// Show net amount after discount

#include <stdio.h>

void main()
{
  int qty,price,netamount;

     printf("Enter price and qty:");
     scanf("%d%d",&price,&qty);

     if(qty > 2)
        price *= 0.80;
     else
        price *= 0.90;

     netamount = price * qty;
     printf("Net amount = %d", netamount);
}
