#include <stdio.h>

int main()
{
    int n,a,b,c;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d ",&a,&b,&c);

        if (a+b==c)
        {
            printf("YES\n");
        }
        else if (a+c==b)
        {
            printf("YES\n");
        }
        else if (c+b==a)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        
        
    }
    
    return 0;
}