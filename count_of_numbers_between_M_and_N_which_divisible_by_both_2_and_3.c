#include<stdio.h>
int main()
{
    int m,n,i,c=0;
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
    {
        if(i%3==0 && i%2==0)
        {
            c++;
        }
    }
    printf("%d",c);
}