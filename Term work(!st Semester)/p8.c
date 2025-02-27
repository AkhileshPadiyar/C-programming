// F(x) =x2+2 if 0<=x<=10
// F(x) =x2+2x if 11<=x<=20
// F(x) =x3+2x2 if 21<=x<=30
// F(x) =0 if x>30

#include<stdio.h>
#include<stdlib.h>
void main()
{
    int x,res;
    printf("\t\t\t------X------Input------X------\n\n\n");
    printf("Enter the value of x\n");
    scanf("%d",&x);
    printf("\t\t\t------X------Output------X------\n\n\n");
    if(0<=x && x<=10)
        res=x*x+2;
    else if(11<=x && x<=20)
        res=x*x+2*x;
    else if(21<=x && x<=30)
        res=x*x*x+2*x*2;
    else if(x>30)
        res=0;
    else
    {
        printf("Negative value of x");
        exit(0);
    }
    printf("The Result is %d",res);       
}