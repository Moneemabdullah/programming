#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int f(int x)
{
    x=20;
    printf("f x ar address- %p\n",&x);
    printf("f x ar valu- %d\n",x);
}
int main() 
{
    int x=10;
    printf("main x ar address- %p\n",&x);
    printf("main x ar valu- %d\n",x);
    f(x);
    return 0;
}
