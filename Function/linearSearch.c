#include<stdio.h>
int linearSearch(int a[], int n){
    for (int i = 0; i < 5; i++)
    {
        if (n == a[i])
        {
            return i;
        }
    }
}

int main(){
    int a[5] = {2,4,5,8,9},n;
    scanf("%d",&n);
    int key = linearSearch(a,n);
    printf("%d",key);
    return 0;
}