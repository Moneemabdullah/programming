#include <stdio.h>

int main()
{
    int i;
    while (scanf("%d",&i))
    {
        if (i>0)
        {
            printf("Case 1: %d\n",i);
        }
        else if (i==0)
        {
            break;
        }
        
        
    }

    return 0;
}