#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    float segundaNota;
    float media;
    float primeiraNota;

    printf("Digite a primeiraNota: ");
    scanf("%f", &primeiraNota);

    printf("Digite a segundaNota: ");
    scanf("%f", &segundaNota);

    media = (primeiraNota + segundaNota) / 2;

    system("cls || clear"); 

    printf("PrimeiraNota: %.1f \n", primeiraNota);
    printf("SegundaNota: %.1f \n", segundaNota);
    printf("Média: %.1f \n", media);

    if (media >= 7) {
        printf("Aprovado!");
    }
    else{
        printf("Reprovado!");
    }


// String copy , strcps :


    return 0;
}