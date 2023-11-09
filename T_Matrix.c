#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int a;
    scanf("%d",&a);
    int r[a][a];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            scanf("%d",&r[i][j]);
        }
        
    }
    int x=0;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if (i==j)
            {
                x=x+r[i][j];
            }
            
        }
        
    }
    int y=0;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if (j+i==2)
            {
                y=y+r[i][j];
            }
            
        }
        
    }
    int p=abs(x-y);
    printf("%d",p);
    
}



