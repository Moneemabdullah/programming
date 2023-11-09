#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n,k,r;
    scanf("%d",&n);
    k=0;
    int s[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&s[i]);
    }
    scanf("%d",&r);
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1 ; j < n; j++)
        {
            
            if (s[i]+s[j]==r)
            {
                k=1;
                
            }
            
        }

    }
        if (k==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
        
    
    return 0;
}
