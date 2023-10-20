#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

setlocale(LC_ALL, "portuguese");
    float numero;

    printf("Digite um numero: ");
    scanf("%f", &numero);

    
printf("Numero°: %f \n", numero);  



if (numero > 10) {
        printf("Maior que 10!");
    }
    else if(numero == 10){
        printf("O numero e 10!");  
    }
    else {
        printf("Menor que 10!");
    }

// = atribuicao , == comparacao , != diferente

    



return 0;
}


