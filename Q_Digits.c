#include <stdio.h>

int main()
{
    int a,b,x,i;
    scanf("%d",&a);
    for (size_t i = 0; i < a; i++)
    { 
        scanf("%d",&x);
        do
        {

            b=x%10;
            printf("%d ",b);
            x=x/10;
    
        }
        while (x!=0);
        printf("\n");
    }
    return 0;
}