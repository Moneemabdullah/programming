#include <stdio.h>

int main()
{

    int n, i;
    scanf("%d", &n);
    int arry[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arry[i]);
    }

    for (i = n - 1; i >= 0; i--)
    {
        if (i % 2 == 1)
        {

            printf("%d ", arry[i]);
        }
    }

    return 0;
}