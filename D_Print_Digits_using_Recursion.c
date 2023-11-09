#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void dig(int i)
{
    if (i%10==0)
    {
        return;
    }
    int x=i%10;
    dig(i/10);
    
    printf("%d ",x);
}
int main() 
{
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        int a;
        scanf("%d", &a);
        dig(a);
        if (a==0)
        {
            printf("0");
        }
        
        printf("\n");
    }
    
    return 0;
}
