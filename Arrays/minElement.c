#include<stdio.h>
int main(){
    int a[5] = {9,3,5,2,6};
    int min = a[0];
    for (int i = 0; i < 5; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }   
    }
    printf("%d",min);
    return 0;
}