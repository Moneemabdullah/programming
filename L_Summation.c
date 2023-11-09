#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void fun(int ar[],int a,int i,long long int x)
{
    
    
    if (i==a)
    {
        printf("%lld",x);
        return;
    }
    x=x+ar[i];

    fun(ar, a,i+1,x);

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
    fun(ar, a,0,0);
    return 0;
}
