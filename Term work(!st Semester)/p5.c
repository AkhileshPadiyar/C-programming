#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c;
    float D=0;
    printf("\t\t\t------X------Input------X------\n\n\n");
    printf("Enter the coefficients a, b and c respectively\n");
    scanf("%d %d %d",&a,&b,&c);
    D = b*b - 4*a*c;
    printf("\t\t\t------X------Output------X------\n\n\n");
    if(D>0)
    {
        float root1 = (-b + sqrt(D)) / (2*a);
        float root2 = (-b - sqrt(D)) / (2*a);
        printf("Roots of the equation are %f and %f",root1,root2);
    }
    else if(D==0)
    {
        float root = (float)(-b) / (2*a);
        printf("The Root of the given equation is %f",root);
    }

    else
    {
        printf("The Roots are Imaginary");
    }
}