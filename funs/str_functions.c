
int count_upper(char s[50])
{
    int i, count = 0;

      for (i = 0; s[i] != '\0'; i ++)
      {
         if (isupper(s[i]))
            count ++;
      }
      return count;
}

void main()
{
   char s[] = "How do you DO?";
   int count;

     count = count_upper(s);
     printf("\nUppercase count :%d", count);
}
