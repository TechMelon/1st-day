#include<stdio.h>
int main(){
    int n,f2=1,fn=0;
    int f1 = 0;
    scanf("%d",&n);
    for (int i = 1; i < n; i++)
    {
        if (i == 1)
        {
            printf("%d ",f1);
            continue;
        }
        if (i == 2)
        {
            printf("%d ",f2);
            continue;
        }
        fn = f1 + f2;
        f1 = f2;
        f2 = fn;
        printf("%d",fn);
        printf(" ");
    }
    return 0;
}