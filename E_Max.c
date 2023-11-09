#include <stdio.h>

int main()
{
    int a,i,b;
    int m =0;
    scanf("%d",&a);
    for (size_t i = 0; i < a; i++)
    {
        scanf("%d",&b);
        if (b>=m)
        {
            m=b;
        }
    }
    printf("%d",m);
    
    return 0;
}