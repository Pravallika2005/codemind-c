#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    float sum=0,avg;
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    avg=sum/n;
    printf("%0.2f",avg);
}