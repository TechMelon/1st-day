#include<stdio.h>
int Sum(int a[], int n){
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        sum += a[i];
    }
    printf("%d",sum);
    return sum;
}
int main(){
    int n,a[]={1,2,3};
    scanf("%d",&n);
    Sum(a,n);
    return 0;
}