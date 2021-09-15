
void zero(int * v)
{
   *v = 0;
}

void main()
{
  int n = 100;

      zero(&n);
      // scanf("%d",&n);
      printf("%d", n);
}
