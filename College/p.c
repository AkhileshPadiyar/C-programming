#include <stdio.h>
#include <string.h>
int main(){
  char ch[20],ch1[10];
  int l,i,pos,m,n;
  printf("Input String: ");
  fgets(ch,20,stdin);             // gets() ka use krne se enter ni aata end mei
  printf("Input substring: ");
  fgets(ch1,10,stdin);
  printf("Input position: ");
  scanf("%d",&pos);
  l = strlen(ch);
  l--;
  n=l+m;
  for(i=pos-1;ch[i]!='\0';i++){     // a
    ch[i+m] = ch[i];
    printf("%c",ch[i+m]);           // iski wajah se baar baar print hoora tha
  }
  ch[i] = '\0';     
  for(i=0;ch[i]!='\0';i++){
    ch[pos+i] = ch1[i];
  }
  puts(ch);
  return 0;
}