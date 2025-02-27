#include<stdio.h>
void main()
{
    int p=80000,men,women,tl,lm,ilm,ilw;
    men=0.52*p;
    tl=0.48*p;
    women=p-men;
    lm=0.35*p;
    ilm=men-lm;
    ilw=tl-ilm;
    printf("\t\t\t------X------Output------X------\n\n\n");
    printf("The total number of \nILLiterate men: %d \nILLiterate women : %d",ilm,ilw);
}