#include<stdio.h>
int main(){
    int a[5] = {2,4,5,8,9},index = 5;
    for (int i = 0; i < 5; i++)
    {
        if (index == a[i])
        {
            printf("%d",i);
        }
        
    }
    
    return 0;
}