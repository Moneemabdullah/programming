#include <stdio.h>

int main()
{
    int a,i,x;
    scanf("%d",&a);
    int Even=0 ,odd=0 ,positive=0, negative=0;
    for (i = 0; i < a; i++)
    {
        scanf("%d",&x);

        if(x%2==0)
        {
            Even=Even+1;
        }    
        else if(x%2==1|| x%2==-1)
        {
            odd++;
        }

        if(x>0) 
        {
            positive++;
        }
        else if(x<0)
        {
            negative++;
        }
    }
    printf("Even: %d\n",Even);
    printf("Odd: %d\n",odd);
    printf("Positive: %d\n",positive);
    printf("Negative: %d",negative);
    
    return 0;
}