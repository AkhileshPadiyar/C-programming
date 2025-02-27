#include<stdio.h>
#include<string.h>
void main(){
  char str[20000],i=0, strd[20000];
  printf("Enter the String: ");
  fgets(str,20000,stdin);
  printf("Enter the String2: ");
  fgets(strd,20000,stdin);


  // To add two Strings 

  int l = strlen(str)-1;

  while(strd[i]!='\0')
  {
    str[l] = strd[i];
    i++;
    l++;
  }
  str[i] = '\0';
  printf("The COncatinated String is %s\n",str);

}