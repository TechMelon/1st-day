#include<stdio.h>
int Sum(int a[], int n,int sum){
    for (int i = 0; i < 3; i++)
    {
        sum += a[i];
    }
    printf("%d",sum);
    return sum;
}
int main(){
    int n,sum = 0,a[]={1,2,3};
    scanf("%d",&n);
    Sum(a,n,sum);
    return 0;
}