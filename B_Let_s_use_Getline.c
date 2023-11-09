#include <stdio.h>

int main()
{
    char a[1000001];
    fgets(a,1000001,stdin);
    int i;
    for ( i = 0; a[i]!= '\\'; i++)
    {
        printf("%c",a[i]);
    }
    
    return 0;
}