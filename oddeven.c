#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("NUMBER IS EVEN");
    }
    else
    {
        printf("NUMBER IS ODD");
    }
    return 0;
}