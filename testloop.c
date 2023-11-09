#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n,s,k;
    
    scanf("%d",&n);

    s=1;
    k=(2*n)-1;
    for (int j = 0; j < n; j++)
    {
        for (int i = 1; i <= s; i++)
        {
            printf(" ");
        }
        for (int i = 1; i <= k; i++)
        {
            printf("*");
        }
        s++;
        k=k-2;
        printf("\n");
    }
    
    return 0;
}
