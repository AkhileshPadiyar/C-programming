#include <stdio.h>
#include <string.h>
void main()
{
  char str[40], word[10], newstr[20];
  int i = 0,j=0,k=0;
  printf("Enter an String: ");
  gets(str);
  while (str[i] != '\0')
  {
    if(str[i]==' '){
      word[k] = '\0';
      newstr[j] = word[0];
      j++;
      newstr[j] = '.';
      j++;
      k=0;
    }
    else{
      word[k] = str[i];
      k++;
    }
    i++;
  }
  newstr[j] = '\0';
  word[k]='\0';
  strcat(newstr,word);
  printf("The New String is %s\n",newstr);
}