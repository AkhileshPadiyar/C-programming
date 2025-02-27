#include<stdio.h>
void main()
{
    float l,b,r,a1,a2,p1,p2;
    printf("\t\t\t------X------Input------X------\n\n\n");    
    printf("Enter the length and breadth of the rectangle\n");
    scanf("%f %f",&l,&b);
    printf("Enter the radius of the circle\n");
    scanf("%f",&r);
    a1=l*b;
    p1=2*(l+b);
    a2=3.14*r*r;
    p2=2*3.14*r;
    printf("\t\t\t------X------Output------X------\n\n\n");
    printf("Rectangles's Perimetre: %f  Area: %f\n",p1,a1);
    printf("Circle's Circumference: %f  Area: %f\n",p2,a2);
}