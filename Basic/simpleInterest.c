#include<stdio.h>
int main(){
    int p,r,t;
    printf("Enter number Principle :\n");
    scanf("%d",&p);
    printf("Enter number Rate :\n");
    scanf("%d",&r);
    printf("Enter number Time :\n");
    scanf("%d",&t);
    float si = (p*r*t)/100;
    printf("Simple Interest : %d");
    return 0;
}