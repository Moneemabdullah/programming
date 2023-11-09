#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n,s,k;
    scanf("%d",&n);
    s=n;
    k=1;
    for (int i = 0; i < (2*n)-1; i++)
    {
        for (int j = 0; j < s; j++)
        {
            printf(" ");
        }
        for (int j = 1; j < k; j++)
        {
            printf("*");
        }
        if (i<=n-1)
        {
            s--;
            k+=2;
        
        }
        else
        {
            s++;
            k=k-2;
        }
        printf("\n");
    }
    return 0;
}
