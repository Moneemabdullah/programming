#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char a[11];
    char b[11];
    char p[11];
    scanf("%s",a);
    scanf("%s",b);
    strcpy(p,a);
    int x=strlen(a);
    int y=strlen(b);
    printf("%d %d\n",x,y);
 
    printf("%s%s\n",a,b);
    char t= p[0];
    p[0]=b[0];
    b[0]=t;
    printf("%s %s\n",p,b);
    return 0;
}