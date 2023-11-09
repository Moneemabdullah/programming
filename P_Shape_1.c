#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n;
    scanf("%d",&n);
    int a=n;
    for (int i = 0; i < n; i++)
    {
        
        for(int j=1; j<=a; j++)
        {
            printf("*");
            
        }
        printf("\n");
        a=a-1;
    }
    
    return 0;
}
