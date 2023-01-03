#include<stdio.h>
int main()
{
 int n,s=0,f=0,m,r,l,k;
 scanf("%d",&n);
 m=n;
 while(n!=0)
 {
  r=n%10;
  s=s*10+r;
  n=n/10;
 }
 l=s*s;
 while(l!=0)
 {
  k=l%10;
  f=f*10+k;
  l=l/10;
 }
 if(m*m==f)
 {
  printf("True");
 }
 else
 {
  printf("False");
 }
}