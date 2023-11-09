#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int count_before_one(int ar[],int a)
{
    int x=-1;
    for (int i = 0; i < a; i++)
    {
        if (ar[i]==1)
        {
            x=i;
            break;
        }
        
    }
    int s;
    if (x==-1)
    {
        s=-1;
    }
    else
    {
        s=ar[x-1];
    }
    return s; 

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
    int x = count_before_one(ar,a);
    
    printf("%d",x);
    return 0;
}
