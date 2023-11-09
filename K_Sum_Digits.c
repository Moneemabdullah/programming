#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n;
    scanf("%d",&n);
    char a[n];
    scanf("%s",a);
    int s=0;
    int y;
    for (int i = 0; i < n; i++)
    {
        y=a[i]-48;
        s=s+y;
    }
    printf("%d",s);
    
    return 0;
}
