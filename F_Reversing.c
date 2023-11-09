#include <stdio.h>

int main()
{
    int a,i;
    scanf("%d",&a);
    int arry[a];
    for (i = 0; i < a; i++)
    {
        scanf("%d",&arry[i]);
    }
    for (i = a-1 ; i >= 0; i--)
    {
        printf(" %d",arry[i]);
    }
    
    return 0;
}