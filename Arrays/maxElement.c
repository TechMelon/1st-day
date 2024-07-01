#include<stdio.h>
int main(){
    int a[5] = {5,9,6,7,3};
    int max = a[0];
    for (int i = 0; i < 5; i++)
    {
        if (a[i]>max)
        {
            max = a[i];
        }
    }
    printf("%d",max);
    return 0;
}