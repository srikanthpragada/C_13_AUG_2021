// Read product info based on id
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
   int count, offset, id;

       fp = fopen("products.dat","rb");

       printf("Enter product id :");
       scanf("%d",&id);

       // calculate offset
       offset = sizeof(p) * (id - 1);

       // move file pointer to required offset from the beginning
       fseek(fp, offset, SEEK_SET);

       count = fread(&p, sizeof(p), 1, fp);
       if (count == 1)
           printf("%-30s %6d\n",p.name,p.price);
       else
           printf("Product Id Not found!");

       fclose(fp);
}
