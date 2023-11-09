#include <stdio.h>

int main()
{
    char a[20];
    // gets(a);
    fgets(a,20,stdin);
    printf("%s",a);

    return 0;
}