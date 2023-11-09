#include <stdio.h>

int main()
{
    int n,a,i,k;
    scanf("%d",&n);
    int arry[n];
    for ( i = 1; i < n; i++)
    {
        scanf("%d",&a);

    }
    scanf("%d",&k);
    for ( i = 0; i < n; i++)
    {
        if (arry[i]==k)
        {
            printf("%d",i);
        }
        else if (arry[i]==k)
        {
            printf("-1");
        }
    }
    
    
    return 0;
}