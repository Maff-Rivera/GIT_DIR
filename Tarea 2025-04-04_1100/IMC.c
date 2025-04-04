#include <stdio.h>

int main(){

float peso, altura, IMC;

printf("Ingrese su peso:\n");
scanf("%f", &peso);

printf("Ingrese su altura:\n");
scanf("%f", &altura);

IMC= peso/ (altura*altura);

  if(IMC <= 18.4){
    printf("Bajo peso\n");
    }
  else if(IMC >=18.5 && IMC <= 24.9){
    printf("Peso Normal\n");
    }
  else if(IMC >=25.0 && IMC <= 29.9){
    printf("Sobrepeso\n");
    }
  else if(IMC >=30.0 && IMC <= 34.9){
    printf("Obesidad clase 1\n");
    }
  else if(IMC >=35.0 && IMC <= 39.9){
    printf("Obesidad clase 2\n");
    }
  else if(IMC >=40.0){
    printf("Obesidad clase 3\n");
    }
printf("El IMC es: %.2f\n",IMC);
return 0;
}
