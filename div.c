#include <stdio.h>

int main()
{
    int a=6;
    int b=7;
    int x=0;
    if (a%b==0)
    {
        x=0;
    }
    else
    {
        while (a%b!=0)
        {
            a++;
            x++;
        }
        
    }
    printf("%d",x);
    
    
    return 0;
}