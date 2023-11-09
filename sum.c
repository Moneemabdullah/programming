#include <stdio.h>

int main()
{
    int a=5;
    int b=89;
    int s=0;
    for ( int i = a; i <= b; i++)
    {
        s=s+i;
    }
    printf("%d",s);
    return 0;
}