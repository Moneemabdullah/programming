#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void str(char* a,int i,int x)
{
    if (a[i]=='\0')
    {
        printf("%d",x);
        return;

    }
    if (a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
    {
        x++;
    }
    str(a,i+1,x);
}
int main() 
{
    char a[201];
    fgets(a,201,stdin);
    // printf("%s",a);
    str(a,0,0);
    return 0;
}
