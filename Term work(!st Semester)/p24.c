#include <stdio.h>
void main()
{
  int a[20], n, e, p;
  printf("\t\t\t******Input******\n\n\n");
  printf("Enter the size of the array\n");
  scanf("%d", &n);
  printf("Enter the values in the array\n");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
  printf("Enter the element you want to enter\n");
  scanf("%d", &e);
  printf("at which position\n");
  scanf("%d", &p);
  printf("\t\t\t******Output******\n\n\n");
  if (p > n || n == 20)
    printf("Element cannot be added in the array\n");
  else
  {
    for (int i = n; i > p - 1; i--)
    {
      a[i] = a[i - 1];
    }
    a[p - 1] = e;
    n = n + 1;
    printf("The array after adding the element is: \n");
    for (int i = 0; i < n; i++)
    {
      printf("%d, ", a[i]);
    }
  }
}