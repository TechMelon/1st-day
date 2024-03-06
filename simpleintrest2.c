#include<stdio.h>
int main()
{
    int p,r,t;
    float si;
    printf("Enter the amount=\n");
    scanf("%d",&p);
    printf("Enter the rate=\n");
    scanf("%d",&r);
    printf("Enter the time=\n");
    scanf("%d",&t);
    si=p*r*t/100;
    printf("simple intrest=%f",si);
    return 0;
}