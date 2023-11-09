#include<stdio.h>
int main()
{
    int w,x;
    scanf("%d",&w);
    x=w/2;
    if(w<0 && 100<w)
    {
        printf("invalid");
    }
    else if(w%2==0)
    {
        if(x%2==0)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
        
    }
    else
    {
        printf("NO");
    }
    return 0;
}