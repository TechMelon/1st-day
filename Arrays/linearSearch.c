#include<stdio.h>
int main(){
    int a[5] = {2,4,5,8,9},n;
    scanf("%d",&n);
    for (int i = 0; i < 5; i++)
    {
        if (n == a[i])
        {
            printf("%d",i);
        }
        
    }
    
    return 0;
}