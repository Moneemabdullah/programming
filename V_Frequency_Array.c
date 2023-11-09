#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n;
    scanf("%d",&n);
    int a=1;
    int b=n-1;
    for (int j = 0; j < n; j++)
    {       
        for (int i = 0; i <= b; i++)
        {
            printf(" ");
        }
        for (int i = 0; i < a; i++)
        {
            printf("*");
        }
        b--;
        a=a+2;
        printf("\n");
    }
    
    return 0;
}
