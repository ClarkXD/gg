#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <time.h>

int main() {

    setlocale(LC_ALL, "portuguese");

    int Numeros[5];

    printf("Digite o 1º número: ");
    scanf("%d", &Numeros[0]);

    printf("Digite o 2º número: ");
    scanf("%d", &Numeros[1]);

    printf("Digite o 3º núºmero: ");
    scanf("%d", &Numeros[2]);

    printf("Digite o 4º núºmero: ");
    scanf("%d", &Numeros[3]);

    printf("Digite o 5º núºmero: ");
    scanf("%d", &Numeros[4]);

    printf("\nExibindo os Numeros... \n");


    printf("1º Número: %d \n", Numeros[0]);
    printf("2º Número: %d \n", Numeros[1]);
    printf("3º Número: %d \n", Numeros[2]);
    printf("4º Número: %d \n", Numeros[3]);
    printf("5º Número: %d \n", Numeros[4]);
    return 0;
}