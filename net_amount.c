// Show net amount after discount

#include <stdio.h>

void main()
{
  int qty,price,amount,discount,netamount;

     printf("Enter qty and price:");
     scanf("%d%d",&price,&qty);

     amount = price * qty ;

     if(qty > 2)
        discount = amount * 0.20;
     else
        discount = amount * 0.10;

     netamount = amount - discount;
     printf("Net amount = %d", netamount);
}
