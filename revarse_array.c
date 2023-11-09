// two pointers tecniqe
#include <stdio.h>

int main()
{
    int i,n;
    scanf("%d",&n);
    int arry[n];
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arry[i]);
    }
    int a=0,b=n-1;
    while (a<b)
    {
        int t =arry[a];
        arry[a]=arry[b];
        arry[b]=t;
        a++;
        b--;
    }
    for ( i = 0; i < n; i++)
    {
        printf("%d ",arry[i]);
    }
    
    
    return 0;
}