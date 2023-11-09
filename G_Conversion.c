#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ar [100001];
    fgets(ar,100001,stdin);
    int l=strlen(ar);
    for (int i = 0; i< l; i++)
    {
        if (ar[i]>='A' && ar[i]<='Z')
        {
            ar[i]+=32;
        }
        else if (ar[i]>='a' && ar[i]<='z')
        {
            ar[i]=ar[i]-32;
        }
        else if (ar[i]==',')
        {
            ar[i]=' ';
        }
        
        
    }
    printf("%s",ar);
    
    return 0;
}

    