#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d",&a);
    b=a/10;
    c=a%10;
    if (b==0 || c==0)
    {
        printf("YES");
    }
    else if (b%c==0 || c%b==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    
    return 0;
}