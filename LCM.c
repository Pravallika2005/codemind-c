#include<stdio.h>
int main()
{
 int i,a,b;
 scanf("%d%d",&a,&b);
 for(i=1;i<=b;i++)
 {
  if(a*i%b==0)
  {
   printf("%d",i*a);
    break;  
  }
 }
}