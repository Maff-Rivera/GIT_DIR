#include <stdio.h>
#include <math.h>

int main()
{
    const float m2= 9256, IVA= 0.16;
    int L=12;

    double at= (12*1/2.0*L)+((1/2.0*L*12)/2);

    double costo_t= at*m2;
    double costo_i= costo_t*IVA;
    double Total=costo_t+costo_i;

    printf("Area Total: %.2f\n",at);
    printf("Costo del terreno: %.2f\n",costo_t);
    printf("Costo con IVA: %.2f\n",costo_i);
    printf("Total: %.2f\n",Total);

    return 0;
}
