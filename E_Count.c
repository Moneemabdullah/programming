#include <stdio.h>
#include <string.h>


int main()
{
    char a[1000001];
    scanf("%s",a);
    int i;
    int s=0;
    for ( i = 0; i<strlen(a); i++)
    {
        s=s+(a[i]-'0');
    }
    printf("%d",s);
    
    return 0;
}