// Write products into products.dat

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
   int i;

       fp  = fopen("products.dat","wb");
       // Write 10 products with random prices

       srand(time(0));
       for(i = 1; i <= 10; i ++)
       {
          p.price = rand() % 10000 + 1;
          sprintf(p.name,"Product %d",i);
          fwrite(&p, sizeof(p),1, fp);
       }

       fclose(fp);
}
