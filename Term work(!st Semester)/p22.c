#include <stdio.h>
void main()
{
  int a[20], g = 0, l = 0, e = 0, n, k;
  printf("\t\t\t******Input******\n\n\n");
  printf("Enter the size of the array\n");
  scanf("%d", &n);
  printf("Enter the values in the array\n");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
  printf("Enter a Number to check\n");
  scanf("%d", &k);
  printf("\t\t\t******Output******\n\n\n");
  for (int i = 0; i < n; i++)
  {
    if (a[i] > k)
      g++;
    if (a[i] < k)
      l++;
    if (a[i] == k)
      e++;
  }
  printf("Numbers which are\nGreater than %d: %d\nLess than %d: %d\nEqual than %d: %d\n", k, g, k, l, k, e);
}