// Return position where any char in first string is found in second string
// Return -1 if none s found

int find_char_pos(char s1[20], char s2[20])
{
  int i,j;

      for(i = 0; s1[i] != '\0';  i ++)
      {
         for(j = 0; s2[j] != '\0';  j ++)
         {
              if (s1[i] == s2[j])
                 return j;   // Found char at jth position
         }
      }

      return -1; // Not found
}

void main()
{
   char s1 [] = "abcdef";
   char s2 [] = "iifijk";

    printf("%d", find_char_pos(s1,s2));

}
