// insert an element in array 
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arry [n+1];
    for ( int i = 0; i < n; i++)
    {
        scanf("%d",&arry[i]);
    }
    int position,valu;
    scanf ("%d %d",&position,&valu);
    for (int  i = n+1; i >= position+1; i--)
    {
        arry[i]=arry[i-1];
    }
    arry[position]=valu;
    for ( int i = 0; i <= n; i++)
    {
        printf("%d ",arry[i]);
    }
    
    
    return 0;
}
