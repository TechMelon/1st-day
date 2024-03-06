#include<stdio.h>
int main()
{
    int rain;
    printf("Enter the number:\n");
    scanf("%d",&rain);
    printf("you have entered %d for inspecting rain outside.\n");
    if(rain==0)
    {
        printf("RAINING OUTSIDE");
    }
    else{
        printf("SUNNY DAY");
    }
    return 0;
}