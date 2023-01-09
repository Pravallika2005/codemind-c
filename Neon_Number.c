#include<stdio.h>
int main()
{
    int n,d,t,s=0;
    scanf("%d",&n);
    t=n;
    n=n*n;
    while(n>0)
    {
        d=n%10;
        n=n/10;
        s+=d;
    }
    if(s==t)
    {
        printf("Neon Number");
    }
     else
     {
         printf("Not Neon Number");
     }
}