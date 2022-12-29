#include<stdio.h>
void trapezium(int b1,int b2,int h)
{
    float a;
    a=0.5*(b1+b2)*h;
    printf("%0.4f",a);
}
int main()
{
    int b1,b2,h;
    scanf("%d%d%d",&b1,&b2,&h);
    trapezium(b1,b2,h);
}