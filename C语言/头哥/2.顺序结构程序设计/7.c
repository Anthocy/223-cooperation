#include<stdio.h>
#define PI 3.14

int main(void)
{
    double r, h;
    double C1, Sb, Vb;

    scanf("%lf,%lf",&r,&h);

    C1 = 2 * PI * r ;
    Sb = 4 * PI * r * r;
    Vb = PI * r * r * h;

    printf("C1=%.2f\n", C1);
    printf("Sb=%.2f\n", Sb);
    printf("Vb=%.2f\n", Vb);

    
    return 0;
}