#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int is_palindrome(char a[])
{

    int l=strlen(a);
    char b[l];
    strcpy(b,a);
    int i=0, j=l-1;
    while (i<j)
    {
        int t =a[i];
        a[i]=a[j];
        a[j]=t;
        i++;
        j--;
    }
    int x = strcmp(a,b);
    return x;
}
int main() 
{
    char a[1001];
    scanf("%s",a);
    int x = is_palindrome(a);
    if (x==0)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }

    return 0;
}
