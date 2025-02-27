#include <stdio.h>
#include <string.h>
void main()
{
  char str[20], str2[10], str3[20];
  int i, n, j = 0;
  printf("Enter an String: ");
  gets(str);
  printf("Enter the String you want to enter: ");
  gets(str2);
  printf("From which position");
  scanf("%d", &n);
  i = n - 1;
  while (str[i] != '\0')
  {
    str3[j] = str[i];
    i++;
    j++;
  }
  str3[j] = '\0';
  str[n - 1] = '\0';
  strcat(str, str2);
  strcat(str, str3);
  printf("The new String is %s\n", str);
}