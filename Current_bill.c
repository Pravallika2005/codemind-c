#include<stdio.h>
int main()
{
    float u,c,b,s,tb;
    scanf("%f",&u);
    if(u<=199)
    {
        c=1.20;
    }
    else if(u>=200&&u<400)
    {
        c=1.50;
    }
    else if(u>=400&&u<600)
    {
        c=1.80;
    }
    else
    {
        c=2.00;
    }
    b=c*u;
    if(b>400)
    {
        tb=b+b*0.15;
    }
    else
    {
        tb=b+100;
    }
    printf("%0.2f",tb);
}