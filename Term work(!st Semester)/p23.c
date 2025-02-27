#include <stdio.h>
void main()
{
  int n, arr1[20], k, arr2[20];
  printf("\t\t\t******Input******\n\n\n");
  printf("Enter the size of array 1\n");
  scanf("%d", &n);
  printf("Enter the values in the array 1\n");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr1[i]);
  }
  printf("Enter the size of array 2\n");
  scanf("%d", &k);
  printf("Enter the values in the array 2\n");
  for (int i = 0; i < k; i++)
  {
    scanf("%d", &arr2[i]);
  }
  int arr3[n + k];
  int a = 0, b = 0;
  for (int j = 0; j < (n + k); j++)
  {
    if (a < n && b < k)
    {
      if (arr1[a] < arr2[b])
      {
        arr3[j] = arr1[a];
        a++;
      }
      else
      {
        arr3[j] = arr2[b];
        b++;
      }
    }
    else if (a < n)
    {
      arr3[j] = arr1[a];
      a++;
    }
    else
    {
      arr3[j] = arr2[b];
      b++;
    }
  }
  printf("\t\t\t******Output******\n\n\n");
  printf("The new array after merging and sorting is\n");
  for (int i = 0; i < (n + k); i++)
  {
    printf("%d, ", arr3[i]);
  }
}