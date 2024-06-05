#include<stdio.h>
int main(){
    int year;
    printf("Enter the year : ");
    scanf("%d",&year);
    if (year%4==0)
    {
        printf("It is a leap year.\n");
    }
    else
    {
        printf("Normal year");
    }
}