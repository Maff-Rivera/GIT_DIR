#include <stdio.h>
#include <math.h>

int main()
{
    int L= 7;
    float at= 2*3*L*L + (2*3*L*L)/2.0 + M_PI*pow(3*L/2.0,2)/2;
    float pt= (3*L)+(M_PI*L)+(2*sqrt(5)*L);

    printf("Area total = %f\n",at);
    printf("Perimetro total = %f\n",pt);
}
