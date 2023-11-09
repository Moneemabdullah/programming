#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int a,b;
    scanf("%d %d",&a,&b);
    int r[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d",&r[i][j]);
        }
        
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = b-1 ; j >= 0; j--)
        {
            printf("%d ",r[i][j]);
        }
        printf("\n");
    }
    return 0;
}
