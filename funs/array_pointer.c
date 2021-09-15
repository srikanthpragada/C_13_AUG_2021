
void print(int a[]) // (int * a)
{
    printf("%d  %d ",a[0], *a);
}

void main()
{
   int a [5]  = {10,20,30,40,50};

   printf("%d %d ", a[0], *a);
   print(a);

}
