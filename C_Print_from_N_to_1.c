#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void fun(int i,int n)
{
    if (i==0)
    {
        return;
    }
    if (i==1)
    {
        printf("%d",i);
    }
    else
    {
        printf("%d ",i);
    }
    
    fun(i-1,n);
}
int main() 
{
    int n;
    scanf("%d",&n);
    fun(n,n);
    return 0;
}

