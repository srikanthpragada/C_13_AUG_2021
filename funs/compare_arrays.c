int compare(int a[5] , int b[5])
{
  int i;

      for(i = 0;i < 5; i ++)
      {
        if (a[i] != b[i])
          return 0; // False
      }

      return 1; // True
}

void main()
{
 int ar1[] = {10,20,25,40,50};
 int ar2[] = {10,20,30,40,50};

    printf("%d", compare(ar1,ar2));

}
