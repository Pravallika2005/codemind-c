#include<stdio.h>
void hours(int i)
{
    int h,m;
    h=i/60;
    m=i%60;
    printf("%d Hour(s) %d Minute(s)",h,m);
}
int main()
{
    int i;
    scanf("%d",&i);
    hours(i);
}