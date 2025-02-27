#include <stdio.h>
#include <string.h>
int main(){
  char ch[20],ch1[10];
  int l,i,pos,m,n,j=0;
  printf("Input String: ");
  gets(ch);
  printf("Input substring: ");
  gets(ch1);
  printf("Input position: ");
  scanf("%d",&pos);
  l = strlen(ch);
  m = strlen(ch1);
  n=l+m;
  int k = pos-1 + m;
  for(i=pos-1;i<k;i++){     // agar substring ki length main string ki length se jayada nhi hui(postion se start
    ch[i+m] = ch[i];        // krke) toh logic fail ho jaayega
    ch[i] = ch1[j];       
    j++;
  }
  ch[n] = '\0';
 printf("%s",ch);
  return 0;
}