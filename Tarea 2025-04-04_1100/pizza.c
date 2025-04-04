#include <stdio.h>

int main(){

int pizz, ing, fin;

  printf("¿Que pizza quieres? (1-vegetariana, 2-no vegetariana):\n");
  scanf("%d",&pizz);

   if(pizz==1){
     printf("Ingredientes:\n 1-Pimiento\n 2-Tofu\n");
   }
   else if(pizz==2){
     printf("Ingredientes:\n 1-Peperoni\n 2-Jamon\n 3-Salmon\n");
   }
   else {
     printf("Opcion invalida\n");
   }

   printf("Elige el ingrediente extra:");
   scanf("%d", ing);

   if(pizz==1){
    if(ing==1){
        fin=1;
    }else if (ing==2){
        fin=2;
    }else{
        printf("no valido");

    }
    }else if(pizz==2){
        if (ing==3){
            fin=3;
        }else if (ing==4){
            fin=4;
        }else if (ing==5){
            fin=5;
        }else{
            printf("no valido");
        }
    }

   printf("Su pizza lleva:\n Mozzarella,Tomate,");
    scanf("%d", fin);

    if(fin == 1){
      printf("Pimiento\n");
    }else if(fin==2){
        printf("Tofu\n");
    }else if(fin==3){
        printf("Peperoni\n");
    }else if(fin==4){
        printf("Jamon\n");
    }else if(fin==5){
        printf("Salmon\n");
    }
return 0;
}
