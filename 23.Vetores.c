#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <time.h>

int main() {

    setlocale(LC_ALL, "portuguese");

    int Numeros[5];

    printf("Digite o 1� n�mero: ");
    scanf("%d", &Numeros[0]);

    printf("Digite o 2� n�mero: ");
    scanf("%d", &Numeros[1]);

    printf("Digite o 3� n��mero: ");
    scanf("%d", &Numeros[2]);

    printf("Digite o 4� n��mero: ");
    scanf("%d", &Numeros[3]);

    printf("Digite o 5� n��mero: ");
    scanf("%d", &Numeros[4]);

    printf("\nExibindo os Numeros... \n");


    printf("1� N�mero: %d \n", Numeros[0]);
    printf("2� N�mero: %d \n", Numeros[1]);
    printf("3� N�mero: %d \n", Numeros[2]);
    printf("4� N�mero: %d \n", Numeros[3]);
    printf("5� N�mero: %d \n", Numeros[4]);
    return 0;
}