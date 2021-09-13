
int sum(int a[5])
{
 int i, total = 0;

      for (i = 0; i < 5; i ++)
          total += a[i];

      return total;
}

int find(int a[5], int sn)
{
  int i;

      for (i = 0; i < 5; i ++)
      {
        if (a[i] == sn)
            return i;
      }

      return -1; // Not found
}

void main()
{
   int a [] = {10,20,33,22,33};
   int total;

     total = sum(a);
     printf("%d", total);

     printf("\n Found 33 at %d", find(a,33));
     printf("\n Found 35 at %d", find(a,35));

}
