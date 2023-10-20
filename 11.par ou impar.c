#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    int numero;



    printf("Digite uma Numero°: ");
    scanf("%d", &numero);




    if (numero %2 == 0 ){
        printf("Numero e par!");
    }else{
        printf("Numero impar!");
    }
    
    return 0;
}