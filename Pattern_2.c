#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n,a,b;
    scanf("%d",&n);
    a=n-1;
    b=1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < a; j++)
        {
            printf("-");
            
        }
        a--;
        for (int j = b; j >= 1; j--)
        {
            printf("%d",j);
            
        }
        b++;
        printf("\n");

    }

    
    return 0;
}
