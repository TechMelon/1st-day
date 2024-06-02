#include<stdio.h>
int main(){
    int cel;
    printf("Enter temperature in celcius - ");
    scanf("%d",&cel);
    printf("In fahrenheit = %d", (cel * 9/5) + 32);
    return 0;
}