#include <stdio.h>

int main()
{
    int i,a,b,j,n;
    scanf("%d",&n);
    int x=0;
    for ( i = 0; i < n; i++)
    {
        scanf("%d %d",&a,&b);
        if (a%b==0)
        {
            x=0;
        }
        else
        {
            x=b-(a%b);
        }
        printf("%d\n",x);
    }
    
    return 0;
}