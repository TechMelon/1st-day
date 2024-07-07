#include<stdio.h>
void linearSearch(int a[], int n){
    for (int i = 0; i < 5; i++)
    {
        if (n == a[i])
        {
            printf("%d",i);
        }
    }
}

int main(){
    int a[5] = {2,4,5,8,9},n;
    scanf("%d",&n);
    linearSearch(a,n);
    return 0;
}