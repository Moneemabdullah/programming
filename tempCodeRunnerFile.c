#include <stdio.h>

int main()
{
    int i,s,m,h,a,b;
    scanf("%d",&i);
    h=i/3600;
    a=i-(h*3600);

    m=(a/60);
    b=(m*3600)-a;

    s=i-(h*3600)-(m*60);
    printf("%d:%d:%d\n",h,m,s);
    return 0;
}