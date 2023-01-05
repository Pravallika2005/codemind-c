#include<stdio.h>
int main()
{
    int a,b,c,d,e,p;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e,&p);
    p=(a+b+c+d+e)/5;
    if(p>=90)
    {
        printf("Grade A");
    }
    else if(p>=80&&p<90)
    {
        printf("Grade B");
    }
    else if(p>80&&p<90)
    {
        printf("Grade B");
    }
    else if(p>=70&&p<80)
    {
        printf("Grade C");
    }
    else if(p>60&&p<70)
    {
        printf("Grade D");
    }
    else if(p>40&&p<70)
    {
        printf("Grade E");
    }
      else
      {
          printf("Grade F");
      }
}