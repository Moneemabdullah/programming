#include <stdio.h>

int main()
{
    char a,b;
    scanf("%c",&a);
    b=a+1;
    
    if (a=='z')
    {
        b='a';
    }
    else if (a=='Z')
    {
        b='A';
    }
    printf("%c",b);
    return 0;
}