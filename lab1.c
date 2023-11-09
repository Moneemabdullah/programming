#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int a,b;
    scanf("%d",&a);
    int sum=0;
    int i = 0;
    while (i < 10000)
    {
        b = a%10;
        a = a/10;
        sum = sum + b;
        i++;
    }
    
    printf("%d",sum);
    return 0;
}
