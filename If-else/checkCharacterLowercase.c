#include<stdio.h>
int main(){
    char n;
    printf("Enter the character : \n");
    scanf("%c",&n);
    if (n>='a' && n<='z')
    {
        printf("Character is lowercase.");
    }
    else
    {
        printf("Character is uppercase.");
    }
    return 0 ;
}