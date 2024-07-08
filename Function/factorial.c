#include<stdio.h>
int Factorial(int num){
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    return fact;
}
int main(){
    int num;
    scanf("%d",&num);
    int factorial = Factorial(num);
    printf("%d",factorial);
    return 0;
}