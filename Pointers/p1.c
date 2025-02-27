#include <stdio.h>
void main()
{
  int a[20], *p, n, even = 0, odd = 0, i;
  printf("Enter the limit of the String: ");
  scanf("%d", &n);
  for (i = 0; i < n; i++)
    scanf("%d", (p + i));
  //&a --- (p+i)               a[i]------*(p+i)
  for (i = 0; i < n; i++)
  {
    if (*(p + i) % 2 == 0)
      even += *(p + i);
    else
      odd += *(p + i);
  }
  printf("The Sum of \nEven Terms: %d\nOdd Terms: %d\n", even, odd);
}