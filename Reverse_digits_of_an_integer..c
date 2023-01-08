#include<stdio.h>
int main()
{
    int r,n,i,s=0;
    scanf("%d",&n);
    
    while(n>0)
    {
        i=n%10;
        s=s*10+i;
        n=n/10;
    }
    printf("%d",s);
}