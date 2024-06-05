#include<stdio.h>
int main(){
    int si,math,chem;
    printf("Enter science marks : \n");
    scanf("%d",&si);
    printf("Enter maths marks : \n");
    scanf("%d",&math);
    printf("Enter chemistry marks : \n");
    scanf("%d",&chem);
    float total = (si + chem + math)/3;
    if ((total<40) || si<33 || math<33 || chem<33)
    {
        printf("your total percent is %d and you are failed.");
    }
    else
    {
        printf("your total percent is %d and you are passed.");
    }
    
}