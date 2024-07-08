#include<stdio.h>
void multiplication(int n){
    int multi = 0;
    for (int i = 1; i <= 10; i++)
    {
        printf("%d*%d=%d\n",n,i,n*i);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    multiplication(n);
    return 0;
}