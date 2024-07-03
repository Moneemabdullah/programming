
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    long int pos = 0;
    long int neg = 0;
    for (int i = 0; i < n; i++)
    {
        int val;
        scanf("%d", &val);
        if (val < 0)
        {
            neg += val;
        }
        else
        {
            pos += val;
        }
    }
    printf("%ld %ld", pos, neg);
    return 0;
}
