#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int ar[5][4];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d",&ar[i][j]);
        }
        
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ",ar[i][j]);
        }
        printf("\n");
    }

    return 0;
}
