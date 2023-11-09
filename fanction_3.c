#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int sum(int x,int y)
{
    int s=x+y;
    printf("%d",s);
}
int main() 
{
    int a,b;
    scanf("%d %d",&a,&b);
    sum(a,b);
    return 0;
}
