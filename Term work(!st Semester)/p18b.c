#include <stdio.h>
float series(int n);
void main()
{
    int n;
    float sum = 0;
    printf("\t\t\t******Input******\n\n\n");
    printf("Enter the limit of the series: ");
    scanf("%d", &n);
    sum = series(n);
    printf("\t\t\t******Output******\n\n\n");
    printf("The sum of the series is %f", sum);
}

float series(int n)
{
    float sum = 0, k = 1;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            sum = sum - (float)1 / k;
        else
            sum = sum + (float)1 / k;
        k = k + 2;
    }
    return sum;
}