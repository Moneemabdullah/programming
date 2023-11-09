#include<stdio.h>
int main()
{
    int sum=0;
    int i,a;
    scanf("%d",&a);
    for( i=1;i<=a;i=i+1 )
    {
        sum+=i;
    }
    printf("%d",sum);
    return 0;

}