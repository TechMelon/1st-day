#include<stdio.h>
int reverseNumber(int n){
    int rev = 0, digit = 0;
    for (int i = n; i != 0; i/=10)
    {
        digit = i%10;
        rev = rev*10+digit;
    }
    return rev;
}
int main(){
    int n;
    scanf("%d",&n);
    int reverse = reverseNumber(n);
    printf("%d",reverse);
    return 0;
}