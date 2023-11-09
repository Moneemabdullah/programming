#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int s( int a,int b )
{
    int s=a+b;
    return s;
}


int main() 
{
    int p,q;
    scanf("%d %d",&p,&q);
    int x =s(p,q);
    
    printf("%d",x);
    return 0;
}

