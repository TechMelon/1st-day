#include<stdio.h>
int minElement(int a[]){
    int min = a[0];
    for (int i = 0; i < 5; i++)
    {
        if (a[i]<min)
        {
            min = a[i];
        }
    }
    printf("%d",min);
    return min;
}
int main(){
    int a[5]={8,6,9,3,2};
    minElement(a);
    return 0;
}