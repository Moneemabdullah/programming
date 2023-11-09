#include <stdio.h>

int main()
{
     int a,i,x;
    scanf("%d",&a);
    int Even=0 ,odd=0 ,positive=0, negative=0;
    for (size_t i = 0; i <= a; i++)
    {
        scanf("%d",&x);

        if(x%2==0)
        {
            Even=Even+1;
            printf("%d",Even);
        }  
    return 0;
}