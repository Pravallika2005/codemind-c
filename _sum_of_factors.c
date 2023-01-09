#include<stdio.h>
int main()
{
    int n,i,res=0;
    scanf("%d",&n);
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            res=res+i;
        }
    }
    printf("%d",res);
}