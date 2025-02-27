#include <stdio.h>
#include <string.h>
void main()
{
  char str[20], str2[20];
  int l, l2, i, j;
  printf("Enter String 1: ");
  fgets(str, 20, stdin);
  printf("Enter String 2: ");
  fgets(str2, 20, stdin);
  l = strlen(str) - 1;
  l2 = strlen(str2) - 1;
  if (l != l2)
    printf("Not an Anlagram String\n");
  else
  {
    char str3[20], str4[20];
    strcpy(str3, str);
    strcpy(str4, str2);
    for (i = 0; i < l; i++)
    {
      for (j = 0; j < l - i - 1; j++)
      {
        if (str3[j] >= str3[j + 1])
        {
          char t = str3[j];
          str3[j] = str3[j+1];
          str3[j+1]= t;
        }

        if (str4[j] >= str4[j + 1])
        {
          char t = str4[j];
          str4[j] = str4[j+1];
          str4[j+1]= t;
        }
      }
    }
    int compare = strcmp(str3,str4);
    if(compare == 0)
      printf("Analgra String\n");
    else
      printf("Not An Anlgram String");
    
  }
}