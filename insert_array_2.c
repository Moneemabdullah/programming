// insert an element in array 
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arry [n+2];
    for ( int i = 0; i < n; i++)
    {
        scanf("%d",&arry[i]);
    }
    int pos_1,pos_2,val_1,val_2;
    scanf ("%d %d",&pos_1,&val_1);
    scanf ("%d %d",&pos_2,&val_2);
    for (int  i = n+1; i >= pos_1+1; i--)
    {
        arry[i]=arry[i-1];
    }
    arry[pos_1]=val_1;
    for (int  i = n+1; i >= pos_2+1; i--)
    {
        arry[i]=arry[i-1];
    }
    arry[pos_2]=val_2;
    for ( int i = 0; i <= n+1; i++)
    {
        printf("%d ",arry[i]);
    }
    
    
    return 0;
}
