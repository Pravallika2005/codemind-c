#include<stdio.h>
void frtc(float f)
{
    float c;
    c=(f-32)*5/9;
    printf("%.2f",c);
}
int main()
{
    float f;
    scanf("%f",&f);
    frtc(f);
}