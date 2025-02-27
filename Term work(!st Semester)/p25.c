#include <stdio.h>
void main()
{
  int a[20], n, p = 0;
  printf("\t\t\t******Input******\n\n\n");
  printf("Enter the size of the array\n");
  scanf("%d", &n);
  printf("Enter the values in the array\n");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      if (a[j] > a[j + 1])
      {
        p = a[j];
        a[j] = a[j + 1];
        a[j + 1] = p;
      }
    }
  }
  printf("\t\t\t******Output******\n\n\n");
  printf("The sorted array is\n");
  for (int i = 0; i < n; i++)
  {
    printf("%d, ", a[i]);
  }
}