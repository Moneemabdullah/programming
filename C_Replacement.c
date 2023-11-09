#include <stdio.h>

int main()
{
    int a,b,i;
    scanf("%d",&a);
    int arry[a];
    for (size_t i = 0; i < a; i++)
    {
        scanf("%d",&arry[i]);
    }
    for (size_t i = 0; i < a; i++)
    {
        if (arry[i]>0)
        {
            arry[i]=1;
        }
        else if(arry[i]<0)
        {
            arry[i]=2;
        }  
    }
    for (size_t i = 0; i < a; i++)
    {
        printf(" %d",arry[i]);
    }
        
    return 0;
}