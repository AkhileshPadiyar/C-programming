#include <stdio.h>
int gcd(int, int);
void main()
{
  int a, b, val = 0;
  printf("\t\t\t******Input******\n\n\n");
  printf("Enter two numbers\n");
  scanf("%d %d", &a, &b);
  val = gcd(a, b);
  printf("\t\t\t******Output******\n\n\n");
  printf("The GCD of the two numbers is %d\n", val);
}

int gcd(int a, int b)
{
  static int val = 1;
  static int i = 1;
  if (i == a)
    return val;
  else
  {
    if (a % i == 0 && b % i == 0)
      val = i;
    i++;
    gcd(a, b);
  }
}