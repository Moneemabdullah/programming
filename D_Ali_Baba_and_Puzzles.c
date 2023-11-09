#include <stdio.h>

int main()
{
    int a,b,c,x;
    scanf("%d %d %d %d",&a,&b,&c,&x);
    
    if (a+b*c==x)
    {
        printf("YES");
    }
    else if (a+b-c==x)
    {
        printf("YES");
    }
    else if (a-b+c==x)
    {
        printf("YES");
    }
    else if (a-b*c==x)
    {
        printf("YES");
    }
    else if (a*b+c	==x)
    {
        printf("YES");
    }
    else if (a*b-c==x)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    
    return 0;
}