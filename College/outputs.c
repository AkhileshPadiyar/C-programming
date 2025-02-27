#include <stdio.h>
void main()
{
  char *str = "Hello";
  *str = 'b';
  printf("%s",str);
}