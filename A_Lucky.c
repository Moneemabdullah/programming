#include <stdio.h>

int main()
{
    int a,i,p;
    scanf("%d",&a);
    for ( i = 0; i < a; i++)
    {
        scanf("%d",&p);
        int s1 = p/100000;
        int a= p%100000;
        int s2 =a/10000;
        int b= a%10000;
        int s3 = b/1000;
        int c= b%1000;
        int s4 = c/100;
        int d= c%100;
        int s5 = d/10;
        int e=d%10;
        int s6=e;
        int x=s1+s2+s3;
        int y=s4+s5+s6;

        if (x==y)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        

    }
    
    return 0;
}