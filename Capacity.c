#include<stdio.h>
int main()
{
    int s,b,t,tc;
    scanf("%d%d%d",&s,&t,&b);
    tc=(2*s*t*b*512)/1024;
    printf("%dkb",tc);
}