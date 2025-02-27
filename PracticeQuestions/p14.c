// To check whelther a substring is present of not
#include <stdio.h>
#include <string.h>
void main()
{
  char str[20], substr[10], word[10];
  int i = 0, j = 0, c = 0, val;
  printf("Enter an String: ");
  gets(str);
  printf("Enter the Substring: ");
  gets(substr);
  while (str[i] != '\0')
  {
    if (str[i] != ' ')
    {
      word[j] = str[i];
      j++;
    }
    else
    {
      word[j] = '\0';
      j = 0;
      val = strcmp(word, substr);
      if (val == 0)
        c++;
    }
    i++;
  }
  word[j] = '\0';
  val = strcmp(word, substr);
  if (val == 0)
    c++;
  if (c != 0)
    printf("%s is present %d times in the string\n", substr, c);
  else
  {
    printf("%s is not present in the string: %d\n",substr,c);
  }
}