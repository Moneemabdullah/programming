#include<stdio.h>
int main()
{
    int a,b,c,d,x,y,max,p,q,r;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a>b) x=a;
    else x=b;
    
    if(c>d) y=c;
    else y=d;
    
    if(x>y)max=x;
    else max=y;
    
    p=max-a;
    q=max-b;
    r=max-c;
    
    printf("%d %d %d",p,q,r);
    return 0;


}