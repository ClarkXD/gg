#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main(){

    int i,numero, soma;

    printf("Digite 5 numeros inteiros: \n");

    soma = 0;
    for ( i = 1; i <= 5 ; i++){
        scanf("%d", &numero);
        soma += numero; 
    }
    

   
   printf("Soma total dos numeros: %d \n", soma);

    return 0;
}