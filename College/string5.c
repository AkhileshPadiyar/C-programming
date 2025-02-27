#include<stdio.h>
#include<string.h>
void main()
{
  char str[20000], ch;
  int i = 1,n,c = 0;
  printf("Enter the String: ");
  fgets(str,20000,stdin);
  printf("Enter the character you want to check: ");
  scanf("%c",&ch);
  strlwr(str);
  ch = toLowerCase(ch);
  if(str[0] == ch)        c++;
  else{
  while(str[i]!='\0')
  {
    if(str[i]==' ' && str[i+1] == ch)       c++;
    i++;
  }
  }

  printf("The Number of words starting with %c is %d\n",ch,c);

}