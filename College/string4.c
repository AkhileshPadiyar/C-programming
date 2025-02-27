#include<stdio.h>
#include<string.h>
void main()
{
  char str[20000],word[200];
  int n,l,i=0,j=0,c=0;
  printf("Enter the String: ");
  fgets(str,2000,stdin);
  printf("Enter the number of words you want to check: ");
  scanf("%d",&n);
  printf("The Reverse of each word at its place is: \n");
  l=strlen(str);
  str[l-1] = ' ';
  while(str[i]!='\0')
  {
    while(str[i]!=' ')
    {
      word[j] = str[i];
      j++;
      i++;
    }
    word[j] = '\0';
    printf("%s ",strrev(word));
    j=0;
    i++;
  }
  printf("\n");
}