#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int sum(int a,int b)
{
    int s=a+b;
    return s;
}
int main() 
{
    int a,b;
    scanf("%d %d",&a,&b);
    int s = sum(a,b); 
    printf("%d",s);
    return 0;
}
