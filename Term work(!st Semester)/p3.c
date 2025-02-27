#include<stdio.h>
void main()
{
    float bs,da,hra,gs;
    printf("\t\t\t------X------Input------X------\n\n\n");
    printf("Enter the basic salary\n");
    scanf("%f",&bs);
    da=0.4*bs;
    hra=0.2*bs;
    gs=bs-da-hra;
    printf("\t\t\t------X------Output------X------\n\n\n");
    printf("The gross salary is %f\n",gs);
}