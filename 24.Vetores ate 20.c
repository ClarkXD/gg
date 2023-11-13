#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <time.h>

int main() {

    setlocale(LC_ALL, "portuguese");

    int numero[5];
    int i;

    for ( i = 0; i < 20; i++) {
        printf("Digite um %dº Número:");
        scanf("%d", &numero[i]);
    }
    
    printf("\nExibindo os Números.... \n");

    for ( i = 0; i < 20; i++){
        printf("%dº Número: %dº \n", i + 1, numero[i]);
    }
    

    return 0;
}