#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int a,b;
    scanf("%d",&a);
    int i = 0;
    while (i < 10000)
    {
        b = a%10;
        a = a/10;
        
        printf("%d",b);
    }
    
  
    return 0;
}
