#include<stdio.h>
void shrmin(int i)
{
    int h,m,s;
    h=i/3600;
    m=(i-h*3600)/60;
    s=(i-h*3600-m*60);
    printf("H:M:S-%d:%d:%d",h,m,s);
}
int main()
{
    int i;
    scanf("%d",&i);
    shrmin(i);
}