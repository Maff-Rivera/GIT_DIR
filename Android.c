#include <stdio.h>
#include <math.h>

int main()
{
    int L =7;
    double rad = L/2.0;
    double at = (L*L)+(M_PI* rad* rad/2.0)+ 2*((L/5.0)*(3*L/5.0))+ 2*((L/5.0)*(L/5.0));
    double pt = (L+ M_PI*rad)+(L-rad)+ 2*(3*L/5.0)+ 2*(L/5.0)+ 2*(L/5.0)+ 2*(L/5.0);


    printf("Area total= %.2f\n", at);
    printf("Perimetro total= %.2f\n", pt);

    return 0;
}
