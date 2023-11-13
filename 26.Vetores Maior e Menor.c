#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <time.h>

int main() {

    setlocale(LC_ALL, "portuguese");

    int Numero[5];
    int i;
    int maior = 0;
    int menor = 9999;

        for ( i = 0; i < 5; i++) {
        printf("Digite um %dº Numero:",i + 1);
        scanf("%d", &Numero[i]);

        maior = Numero[i] > maior ? Numero[i] : maior;

        if (Numero[i] < menor){
            menor = Numero[i];

        }
     }
    
        system("cls || clear");

     for ( i = 0; i < 5; i++){
        printf("%dº Numero: %dº \n", i + 1, Numero[i]);
        }
        printf("Menor Numero %d", menor);
        printf("Maior Numero %d", maior);



    
    return 0;
}