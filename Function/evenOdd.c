#include<stdio.h>
int evenOdd(int a[], int even, int odd){
    for (int i = 0; i < 6; i++)
    {
        if (a[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("These are even no. : %d\n",even);
    printf("These are odd no. :%d\n",odd);
    return (even,odd);
}
int main(){
    int a[6]={1,2,3,4,5,6},even=0,odd=0;
    evenOdd(a,even,odd);
    return 0;
}