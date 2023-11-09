#include <stdio.h>

int main()
{
    int a,i;
    scanf("%d",&a);
    for (size_t i = 1; i <= a; i++)
    {
        if (a%i==0)
        {
            printf("%d\n",i);
        }
        
    }
    
    return 0;
}