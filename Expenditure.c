#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    c=b*30;
    if(c<=a)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}