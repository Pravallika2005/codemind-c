#include<stdio.h>
void diyw(int d)
{
  int y,w;
  y=d/365;
  w=(d%365)/7;
  printf("%d
%d",y,w);
}
int main()
{
    int d;
    scanf("%d",&d);
    diyw(d);
}
