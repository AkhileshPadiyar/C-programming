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
    int val = 1;
    float sum = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
            val = val * j;
        sum = sum + (float)i / val;
        val = 1;
    }
    return sum;
}