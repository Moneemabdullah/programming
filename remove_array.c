#include <stdio.h>

int main()
{
    int n,i,pos;
    scanf("%d",&n);
    int arry[n];
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arry[i]);
    }
    scanf ("%d",&pos);
    for ( i = pos; i < n-1; i++)
    {
        arry[i]=arry[i+1];
    }
    for ( i = 0; i < n-1; i++)
    {
        printf("%d ",arry[i]);
    }
    
    
    return 0;
}
