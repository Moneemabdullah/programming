#include <stdio.h>

int main()
{
    int a,i,b;
    scanf("%d",&a);
    for (size_t i = 1; i < 13; i++)
    {
        b=a*i;
        printf("%d * %d = %d\n",a,i,b);
    }
    
    return 0;
}