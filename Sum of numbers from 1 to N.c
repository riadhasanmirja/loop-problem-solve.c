#include<stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("%d + %d = %d\n", sum, i, sum+i);
        sum = sum + i;
    }

    return 0;
}

