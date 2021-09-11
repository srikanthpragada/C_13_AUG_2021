// User-defined function
void line(int length, char ch)
{
 int i;

    for(i = 1; i <= length; i ++)
         putch(ch);
}

void main()
{
      line(40,'*');  // call function
      printf("\nSrikanth Technologies\n");
      line(50,'-');
}
