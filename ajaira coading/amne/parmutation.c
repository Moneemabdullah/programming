
/*
                    MD Abdullah al moneem
Bangladesh Army International University of Science and Technology
*/

#include <stdio.h>

int size(char a[])
{
    int i;
    for (i = 0; a[i]; i++)
        ;
    return i;
}
void sort(char *a, int s)
{
    for (int i = 0; i < s; i++)
    {
        for (int j = i; j <= s; j++)
        {
            if (a[i] < a[j])
            {
                char t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
}

int cmp(char *a, char *b, int s)
{
    for (int i = 0; i < s; i++)
    {
        if (a[i] != b[i])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char a[100];
    char b[100];

    scanf("%s", a);
    scanf("%s", b);

    int sizea = size(a);
    int sizeb = size(b);

    sort(a, sizea);
    sort(b, sizeb);

       if (sizea == sizeb)
    {
        if (cmp(a, b, sizea))
        {
            printf("permutations\n");
            return 0;
        }
        else
        {
            printf("Not permutations\n");
            return 0;
        }
    }

    printf("Not permutations");
    return 0;
}
