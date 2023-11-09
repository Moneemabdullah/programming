#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n;
    scanf("%d",&n);
    int a=1;
    int s=n-1;
    for (int i = 0; i < n; i++)
    {
        for ( int j =0; j< s; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < a; j++)
        {
            printf("*");
        }
        s--;
        a++;
        printf("\n");
    }
    
    return 0;
}
