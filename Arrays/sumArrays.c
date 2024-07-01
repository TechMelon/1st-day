#include<stdio.h>
int main(){
    int n,sum = 0, a[] = {1,2,3};
    scanf("%d",&n);
    for (int i = 0; i < 3; i++)
    {
        sum += a[i];
    }
    printf("%d",sum);
    return 0;
}