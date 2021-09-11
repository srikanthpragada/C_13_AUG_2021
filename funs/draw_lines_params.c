// User-defined function
void line(int length)
{
 int i;

    for(i = 1; i <= length; i ++)
         putch('*');
}

void main()
{
      line(30);  // call function
      printf("\nSrikanth Technologies\n");
      line(50);
}
