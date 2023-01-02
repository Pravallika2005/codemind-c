#include<stdio.h>
int main()
{
 int l,w,b,c,area,cost;
 scanf("%d%d%d%d",&l,&b,&w,&c);
 area=(((l+2*w)*(b+2*w))-(l*b));
 cost=area*c;
 printf("%d",cost);
}