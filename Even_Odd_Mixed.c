#include<stdio.h>
#include<math.h>
int main()
{
    int n,r,s=0;
    scanf("%d",&n);
    int d=log10(n)+1;
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        if(r%2==0)
        s++;
    }
    if(s==d)
    {
        printf("Even");
    }
    else if(s==0)
    {
        printf("Odd");
    }
    else
    {
        printf("Mixed");
    }
}