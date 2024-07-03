#include <stdio.h>

int main()
{

    int n, x, i, v;
    scanf("%d", &n);
    int arry[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arry[i]);
    }
    scanf("%d %d", &x, &v);
    arry[x] = v;

    for (i = n - 1; i >= 0; i--)
    {
        printf("%d ", arry[i]);
    }
    return 0;
}