#include<stdio.h>
int main(){
int a[6] = {2,3,4,5,6,7},even = 0,odd = 0;
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
printf("These are odd no. : %d\n",odd);
    return 0;
}