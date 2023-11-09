#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    float ax,ay,bx,by,cx,cy;
    printf("ax: ");
    scanf("%f",&ax);
    printf("ay: ");
    scanf("%f",&ay);
    printf("bx: ");
    scanf("%f",&bx);
    printf("by: ");
    scanf("%f",&by);
    printf("cx: ");
    scanf("%f",&cx);
    printf("cy: ");
    scanf("%f",&cy);
    double area;
    area = fabs(( ax*( by - cy) + bx*(cy-ay) + cx*(ay-by))/2.0);
    
    printf("The area is: %lf",area);

    return 0;
}
