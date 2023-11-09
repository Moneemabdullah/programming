#include<stdio.h>
int main()
{

    long long int a,b,c;
    scanf("%lld %lld %lld",&a,&b,&c);
    long long int x=0;
    if (c<=a&&c<=b)
    {
        x=c;
    }
    
    else if (a<=b&&a<=c)
    {
        x=a;
    }
    
    else if (b<=a)
    {
        a=a-b;
        c=c-b;
        x=x+b;
        if (a/2<=c)
        {
            x=x+a/2;
        }
        else if (a/2>=c)
        {
            x=x+c;
        }
    }
    printf("%lld",x);
    return 0;
}