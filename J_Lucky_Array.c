#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void moneem(int ar[],int s,int a,int b,int i)
{
    if (i==s)
    {
        if (a>b)
        {
            printf("Lucky");
        }
        else if (b>a)
        {
            printf("Unlucky");
        }
        return;
    }
    if (ar[i]%2==0)
    {
        a++;
    }
    else
    {
        b++;
    }
    moneem(ar,s,a,b,i+1);
    
}
int main() 
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&ar[i]);
    }
    moneem(ar,n,0,0,0);
    return 0;
}
