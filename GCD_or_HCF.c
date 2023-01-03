#include<stdio.h>
int main()
{
 int n,m,i,s=0;
 scanf("%d%d",&n,&m);
 for(i=1;i<=n&&i<=m;i++)
 {
  if(m%i==0&&n%i==0)
  {
   s=i;
  }
 }
 printf("%d",s);
}