// Find the Maximum frequency Character in the string

#include<stdio.h>
void main(){
  char str[20], ch;
  int i=0,max=0,c=0,j;
  printf("Enter an String: ");
  gets(str);
  for(j=65;j<=122;j++){
    if(j==91){
      j=97;
    }
    while(str[i]!='\0'){
      if(str[i] == j){
        c++;
      }
      i++;
    }
    if(max<c){
      max = c;
      ch = (char)j;
    }
  }
  printf("Character with highest Frequency of %d is %c\n",max,ch);
}