#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int a;
    scanf("%d",&a);
    for (int i = 0; i < a; i++)
    {
        int x,y;
        scanf("%d %d",&x ,&y);
        if (x==y)
        {
            printf("Square\n");
        }
        else
        {
            printf("Rectangle\n");
        }
        
        
    }
    
    return 0;
}
