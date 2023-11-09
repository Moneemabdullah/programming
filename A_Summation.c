#include <stdio.h>

int main()
{
    long long int n,i;
    scanf("%d",&n);
    int a=0;
    int ar[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d",&ar[i]);
        a=a+ar[i];
    }

    if (a<0)
    {
        a=a*(-1);
    }
    
    printf(" %lld\n ",a);
    
    return 0;
}