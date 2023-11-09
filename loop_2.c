#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h> 

int main() 
{
    int l,s,k;
    scanf("%d",&l);
    s=l;
    k=1;
    for (int j = 0; j < l; j++)
    {
    
        for (int i = 1; i <= s-1; i++)
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
    
    return 0;
}
