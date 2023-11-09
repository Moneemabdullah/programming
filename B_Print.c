#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int s,n,k;
    scanf("%d",&n);
    s=n-1;
    k=1;
    // for (int j = 0; j < (2*n)-1; j++)
    // {
    //     if (j<=n)
    //     {

            
    //     }
        
    // }
                for (int i = 0; i < s; i++)
            {
                printf(" ");
            }
            if (j%2==0)
            {
                for (int i = 0; i < k; i++)
                {
                    printf("#");
                }
            }
            if (j%2!=0)
            {
                for (int i = 0; i < k; i++)
                {
                    printf("-");
                }
            }
            printf("\n");
            s--;
            k=k+2;
    
    return 0;
}
