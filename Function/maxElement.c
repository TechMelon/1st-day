#include<stdio.h>
int maxOfArr(int a[]){
    int max = a[0];
    for (int i = 0; i < 5; i++)
    {
        if (a[i]>max)
        {
            max = a[i];
        }
        
    }
    printf("%d", max);
    return max;
}

int main(){
    int a[5] = {3,7,8,5,6};
    maxOfArr(a);
    return 0;
}