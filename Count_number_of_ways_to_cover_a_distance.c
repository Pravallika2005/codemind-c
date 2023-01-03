#include<stdio.h>
int dis(int k)
{
 if(k<0)
 {
  return 0;
 }
 if(k==0)
 {
  return 1;
 }
 return dis(k-1)+dis(k-2)+dis(k-3);
}
int main()
{
 int v,r;
 scanf("%d",&r);
 v=dis(r);
 printf("%d",v);
}