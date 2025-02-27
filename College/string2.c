#include<stdio.h>
#include<string.h>
void main()
{
  char ch[20000];
  int a=0,s=0,i=0;
  printf("Enter an String");
  fgets(ch,20000,stdin);
  while(ch[i]!='\0')
  {
    if(ch[i]==' ')
      s++;
    else  a++;
    i++;
  }
  printf("The NUmber of Spaces and Characters are %d and %d respectively\n",s,a-1);
}