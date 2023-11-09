#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int s;
    scanf("%d",&s);
    int a[s];
    for (int i = 0; i < s; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < s-1; i++)
    {
        for (int j=i+1; j<s; j++)
        {
            if (a[i]>a[j])
            {
                int t = a[i];
                a[i]=a[j];
                a[j]=t;
            }
            
        }
        
    }
    for (int i = 0; i < s-1; i++)
    {
        for (int j=i+1; j<s; j++)
        {
            if (a[i]<a[j])
            {
                int t = a[i];
                a[i]=a[j];
                a[j]=t;
            }
            
        }
        
    }
    for (int i = 0; i < s; i++)
    {
        printf("%d ",a[i]);
    }
    
    

    return 0;
}
