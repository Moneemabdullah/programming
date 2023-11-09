#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n;
    scanf("%d",&n);
    for ( int i = 0; i < n; i++)
    {
        char ar[101];
        scanf("%s",&ar);
        int l = strlen(ar);
        if (l<11)
        {
            printf("%s\n",ar);
        }

        else
        {
            int x=l-2;
            printf("%c%d%c\n",ar[0],x,ar[l-1]);
        }
        
    }
    
    return 0;
}
