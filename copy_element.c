#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d ",&a);
    int ar1[a];
    for ( int i = 0; i < a; i++)
    {
        scanf("%d",&ar1[i]);
    }
    
    scanf("%d ",&b);
    int ar2[b];
    for ( int i = 0; i < b; i++)
    {
        scanf("%d",&ar2[i]);
    }
    int ar_p[a+b];
    for ( int i = 0; i < a; i++)
    {
        ar_p[i]=ar1[i];
    }
    int i=a;
    for ( int j = 0; j < b; j++)
    {
        ar_p[i]=ar2[j];
        i++;
    }
    for ( i = 0; i < a+b; i++)
    {
        printf("%d ",ar_p);
    }
    
    

    return 0;
}