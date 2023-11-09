#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int count_before_one(int ar[],int a)
{
    int x=0;
    for (int i = 0; i < a; i++)
    {
        if (ar[i]==1)
        {
            x=i;
            break;
        }
        x++;
    }
    // int s;
    // if (x==0)
    // {
    //     s=0;
    // }
    // else
    // {
    //     s=ar[x-1];
    // }
    return x; 

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
