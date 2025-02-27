#include<stdio.h>
#include<string.h>
void main(){
  char str[20],ch,word[10];
  int i=0,j,n;
  printf("Enter an String: ");
  gets(str);
  printf("Enter the character: ");
  scanf("%c",&ch);
  printf("Enter the length: ");
  scanf("%d",&n);
  while(str[i]!='\0'){
    if(str[i] == ch){
      for(j=0;j<n;j++){
        word[j] = str[i];
        i++;
      }
      word[j] = '\0';
      break;
    }
    i++;
  }
  printf("The word is %s\n",word);
}