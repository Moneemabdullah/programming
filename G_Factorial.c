#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n;
    scanf("%d",&n);
    for (int j = 0; j < n; j++)
    {
        int a;
        long long int b=1;
        scanf("%d",&a);
        for (int i = 1; i <= a; i++)
        {
            b=b*i;
        }
        printf("%lld\n",b);
    }
    
    return 0;
}
