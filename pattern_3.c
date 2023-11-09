#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int a;
    
    scanf("%d",&a);
    int b=a;
    int n=1;
    for (int i = 0; i <= a; i++)
    {
      
        for (int j = 1; j <= b; j++)
        {
            printf(" ");
        }
        b--;
        for (int j = 1; j < n; j++)
        {
            printf("%d ",j);
        }
        n++;
        printf("\n");
    }
    
    return 0;
}
