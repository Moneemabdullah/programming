#include<stdio.h>
int main()
{
    int a,b,c,d,x,y,max;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a>b)x=a;
    else x=b;
    if(c>d) y=c;
    else y=d;
 
    if(x>y)max=x;
    else max=y;
    printf("%d",max);
    int p,q,r;
    if (max==a)
    {
        p=max-b;
        q=max-c;
        r=max-d;
    }
    else if (max==b)
    {
        p=max-b;
        q=max-c;
        r=max-d;
    }
    else if (max==c)
    {
        p=max-b;
        q=max-a;
        r=max-d;
    }
    else if (max==d)
    {
        p=max-b;
        q=max-c;
        r=max-a;
    }
    printf("%d %d %d",p,q,r);
    return 0;


}