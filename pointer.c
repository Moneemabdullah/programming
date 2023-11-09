#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int x = 100;
    int * p= &x;
    printf("%p\n",&p);
    return 0;
}
