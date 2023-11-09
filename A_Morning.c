#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int e(int x,int y)
{
    if (x==1)
    {
        int s=1;
    }
    else if (x>1&&x<10)
    {
        int s=abs(x-y);
    }

}

int main() 
{
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        char a[5];
        int b[4];
        scanf("%s",a);
        b[0] = a[0];
        for (int j =1; j<4; j++)
        {
            int x= e (a[j],a[j-1]);
            b[j]=x;
        }
        for (int j = 0; j < 4; j++)
        {
            printf("%d",b[i]);
            
        }
        // printf("%s",a);
        printf("\n");
        

    }
    
    return 0;
}
