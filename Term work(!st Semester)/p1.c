#include<stdio.h>
void main()
{
    float a,b,c,d,e,sum,per;
    printf("\t\t\t------X------Input------X------\n\n\n");
    printf("Enter the marks of five Subjects\n");
    scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
    sum=a+b+c+d+e;
    per=sum/5;
    printf("\t\t\t------X------Output------X------\n\n\n");
    printf("The aggerates marks and percentage marks obtained by student are %f and %f",sum,per);
}