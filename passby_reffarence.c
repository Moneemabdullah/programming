#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void s(int *p)
{
    *p=50;
    printf("%p\n",&p);
}
int main() 
{
    int x=10;
    printf("%p\n",&x);
    s(&x);
    
    return 0;
}
