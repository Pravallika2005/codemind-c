#include<stdio.h>
int main()
{
    float hra,da,gs;
    float bs;
    scanf("%f",&bs);
    if(bs<=10000)
    {
     da=(bs*80)/100;
     hra=(bs*20)/100;
    }
    else if(bs>10000&&bs<=20000)
    {
        da=bs*0.9;
        hra=bs*0.25;
    }
    else
    {
        da=bs*0.95;
        hra=bs*0.3;
    }
    gs=bs+hra+da;
    printf("%0.2f",gs);
}