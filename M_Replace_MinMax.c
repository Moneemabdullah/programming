#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&ar[i]);
    }
    int a=0, b=100000;
    int x,y;
    for (int i = 0; i < n; i++)
    {
        if (a<ar[i])
        {
            a=ar[i];
            
        }
        if (b>ar[i])
        {
            b=ar[i];
            
        }

       
    }
    for (int i = 0; i < n; i++)
    {
        if (ar[i]==a)
        {
            x=i;
        }
        if (ar[i]==b)
        {
            y=i;
        }
        
    }
    ar[x]=b;
    ar[y]=a;
    for (int i = 0; i < n; i++)
    {
        printf("%d ",ar[i]);
    }

    return 0;
}
