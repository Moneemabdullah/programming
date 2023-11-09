#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int t,y,m,d;
    scanf("%d",&t);
    y=t/365;
    m=(t-(y*365))/30;
    d=(t-((y*365)+(m*30)));
    printf("%d years\n",y);
    printf("%d months\n",m);
    printf("%d days\n",d);
    return 0;
}
