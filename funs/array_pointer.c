
void print(int a[], int length) // (int * a)
{
     for(i = 0; i < length ; i++)
         printf("%5d", a[i]);
}

void main()
{
   int a [5]  = {10,20,30,40,50};
   int b [20];

   printf("%d %d ", a[0], *a);
   print(a, 5);
   print(b, 20)
}
