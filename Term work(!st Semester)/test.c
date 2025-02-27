/* #include <stdio.h>
int main()
{
  int a = -5, b = 2, c = 0, d;
  d = a && b;
  printf("%d", d);
  return 0;

  sorting two arrays
}*/
#include <stdio.h>
void main()
{
  int n, arr1[20], m, arr2[20];
  printf("Enter the size of the array!: ");
  scanf("%d", &n);
  printf("Enter the values in the array1: ");
  for (int i = 0; i < n; i++)
    scanf("%d", &arr1[i]);
  printf("Enter the size of the array!: ");
  scanf("%d", &m);
  printf("Enter the values in the array1: ");
  for (int i = 0; i < n; i++)
    scanf("%d", &arr2[i]);
  int k = m + n;
  int arr3[k];
  int a = 0;
  int b = 0;
  for (int i = 0; i < k; i++)
  {
    if (a < n && b < m)
    {
      if (arr1[a] < arr2[b])
      {
        arr3[i] = arr1[a];
        a++;
      }
      else
      {
        arr3[i] = arr2[b];
        b++;
      }
    }
    else if (b < m)
    {
      arr3[i] = arr2[b];
      b++;
    }
    else
    {
      arr3[i] = arr1[a];
      a++;
    }
  }
  printf("The new array after sorting is: \n");
  for (int i = 0; i < k; i++)
    printf("%d, ", arr3[i]);
}