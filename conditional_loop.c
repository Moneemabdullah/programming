#include<stdio.h>
int main()
{
    int i,a;
    scanf("%d",&a);
    for( i=1;i<=a;i=i+1 )
    {
        if (i%2==0)
        {
            printf("%d-even\n",i);
        }
        else
        {
            printf("%d-odd\n",i);
        }
        
        
    }

    return 0;

}