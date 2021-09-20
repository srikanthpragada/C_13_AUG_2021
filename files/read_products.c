// Read products from products.dat
#include <stdio.h>

struct product
{
   char name[30];
   int price;
};

void main()
{
   FILE * fp;
   struct product p;
   int count;

       fp = fopen("products.dat","rb");
       // Write 10 products with random prices

       while(1)
       {
          count = fread(&p, sizeof(p), 1, fp);
          if (count == 0)
            break;

          printf("%-30s %6d\n",p.name,p.price);
       }

       fclose(fp);
}
