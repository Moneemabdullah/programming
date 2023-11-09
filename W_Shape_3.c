#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h> 

int main() 
{
    int l,s,k;
    scanf("%d",&l);
    s=l-1;
    k=1;

    for (int j = 0; j < l; j++)
    {

        for (int i = 1; i <= s; i++)
        {
            printf(" ");
        }
        
        for (int i = 1; i <= k; i++)
        {
            printf("*");
           
        }
        s--;
        k=k+2;
        printf("\n");
    }
    int m=1;
    int n=(2*l)-1;
    for (int j = 0; j < l; j++)
    {

        for (int i = 1; i < m; i++)
        {
            printf(" ");
        }
        for (int i =1 ; i <= n; i++)
        {
            printf("*");
           
        }
        m++;
        n=n-2;
        printf("\n");
    }
    
    
    return 0;
}
