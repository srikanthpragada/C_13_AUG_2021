#include <stdio.h>

struct product
{
   char name[30];
   int price;
};

void print(struct product p)
{
    printf("Name      : %s\n", p.name);
    printf("Net Price : %8.2f\n\n", p.price * 1.12);
}

void main()
{
  struct product p[3];
  int i;

     for(i = 0; i < 3; i ++)
     {
         fflush(stdin);  // Clear keyboard buffer

         printf("Enter product name  :");
         gets(p[i].name);

         printf("Enter product price :");
         scanf("%d",&p[i].price);
     }

     for(i = 0; i < 3; i ++)
     {
         print(p[i]);
     }

}

