#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void fun(int ar[],int a,int n)
{
    if (n==a)
    {
        return;
    }
    
    fun(ar, a, n+1);
    if (n%2==0)
    {
        printf("%d ",ar[n]);
    }
    
    
}
int main() 
{
    int a;
    scanf("%d",&a);
    int ar[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&ar[i]);
    }
    fun(ar, a, 0);
    return 0;
}
