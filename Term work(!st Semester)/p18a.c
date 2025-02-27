#include <stdio.h>
int series(int);
void main()
{
    int n, sum = 0;
    printf("\t\t\t******Input******\n\n\n");
    printf("Enter the limit of the series: ");
    scanf("%d", &n);
    sum = series(n);
    printf("\t\t\t******Output******\n\n\n");
    printf("The sum of the series is %d", sum);
}

int series(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= i; j++)
            sum = sum + j;
    return sum;
}