#include <stdio.h>
void main()
{
  int a[20], n, max, min;
  printf("\t\t\t******Input******\n\n\n");
  printf("Enter the size of the array\n");
  scanf("%d", &n);
  printf("Enter the values in the array\n");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
  max = a[0];
  min = a[0];
  for (int i = 1; i < n; i++)
  {
    if (max < a[i])
      max = a[i];
    if (min > a[i])
      min = a[i];
  }
  printf("\t\t\t******Output******\n\n\n");
  printf("The maximum value in the array is: %d\n", max);
  printf("The minimum value in the array is: %d\n", min);
}