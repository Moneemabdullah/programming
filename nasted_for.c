#include <stdio.h>

int main()
{
    int i,j;
    for (size_t j = 0; j < 5; j++)
    {
        for (size_t i = 1; i < 6; i++)
        {
            printf(" %d",i);
        }
        printf("\n");
    }
    
    return 0;
}