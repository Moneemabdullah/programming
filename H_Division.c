#include <stdio.h>

int main()
{
    int a,i,b;
    scanf("%d",&a);
    for ( i = 0; i < a; i++)
    {
        scanf("%d",&b);
        if (b>=1900)
        {
            printf("Division 1\n");
        }
        else if (b>=1600&&b<=1899)
        {
            printf("Division 2\n");
        }
        else if (b>=1400&&b<=1599)
        {
            printf("Division 3\n");
        }
        else if (b<=1399)
        {
            printf("Division 4\n");
        }
  
    }
    
    return 0;
}