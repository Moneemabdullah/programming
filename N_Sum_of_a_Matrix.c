#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int a,b;
    scanf("%d %d",&a,&b);
    int r[a][b];
    int s[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d",&r[i][j]);

        }

        
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d",&s[i][j]);
        }
    }
    
    int w[a][b]; 
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            w[i][j]=r[i][j]+s[i][j];
        }
        
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d ",w[i][j]);
        }
        printf("\n");
    }

    return 0;
}
