#include<stdio.h>
int sumDigits(int n){
    int sum =0;
    for (int i = n; i != 0; i/=10)
    {
        sum = sum+i%10;
    }
    return sum;
}
int main(){
    int n;
    scanf("%d",&n);
    int sum = sumDigits(n);
    printf("%d",sum);
    return 0;
}