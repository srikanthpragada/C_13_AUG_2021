struct product
{
   char name[30];
   int price;
};

void main()
{
  struct product p;

     printf("Enter product name  :");
     gets(p.name);

     printf("Enter product price :");
     scanf("%d",&p.price);

     printf("Name      : %s\n", p.name);
     printf("Net Price : %d\n", p.price + p.price * 12 / 100);

}

