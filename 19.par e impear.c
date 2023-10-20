#include <stdlib.h>
#include <stdio.h>
#include <string.h>
 

int main(){

    int i,numero;
    int par = 0;
    int impar = 0;

    printf("Diegite 5 numeros inteiros: ");


    for ( i = 0; i <= 5; i++){
       scanf("%d", &numero);
    }
     if ( numero % 2 == 0){
        par++;
     } else{
        impar++;
     }

     
     
    



printf("Pares: %d: ", par);
printf("Impares: %d: ", impar);
    return 0;
}