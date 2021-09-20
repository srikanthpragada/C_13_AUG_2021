// list products where price > price given on command line
// list_products 4000

#include <stdio.h>

struct product
{
   char name[30];
   int price;
};

void main(int argc, char * argv[])  // command line arguments
{
   FILE * fp;
   struct product p;
   int count, price;

       if(argc < 2)
       {
           printf("Sorry! Price is missing!");
           return;
       }

       fp = fopen("products.dat","rb");
       // Write 10 products with random prices

       price = atoi(argv[1]);  // convert string to int

       while(1)
       {
          count = fread(&p, sizeof(p), 1, fp);
          if (count == 0)
            break;

          if(p.price > price)
             printf("%-30s %6d\n",p.name,p.price);
       }

       fclose(fp);
}
