#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int a;
    
    scanf("%d",&a);
    int b=a;
    for (int i = 0; i < a; i++)
    {
      
        for (int j = 0; j < b; j++)
        {
            printf("*");
        }
        b--;
    
        printf("\n");
    }
    
    return 0;
}
