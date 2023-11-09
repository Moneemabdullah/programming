#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int a;
    scanf("%d",&a);
    int ar[a];

    for (int i = 0; i < a; i++)
    {
        scanf("%d",&ar[i]);
        //printf("%d ",ar[i]);
    }

    for (int i = 0; i < a-1; i++)
    {
        for (int j = i+1; j < a; j++)
        {
            if (ar[i]>ar[j])
            {
                int t = ar[i];
                ar[i] = ar[j];
                ar[j]= t;
            }
            
        }

        
    }
    for (int i = 0; i < a; i++)
    {
        printf("%d ",ar[i]);
    }
    
       
    return 0;
}
