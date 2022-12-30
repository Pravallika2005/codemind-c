#include<stdio.h>
void romeo(int x,int y,int z)
{
    int n;
    n=((x*5)+(y*10))/z;
    printf("%d",n);
}
int main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    romeo(x,y,z);
}