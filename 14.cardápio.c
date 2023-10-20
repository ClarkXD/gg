#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int codigo;

    printf(" Código                              Prato                                  Preço \n");
    printf("   1                                 Picanha                                R$25,00 \n");
    printf("   2                                 Lasanha                                R$20,00 \n");
    printf("   3                                 Strogonoff                             R$18,00 \n");
    printf("   4                                 Bife acebolado                         R$13,00 \n");
    printf("   5                                 Pão com pão                            R$5,00 \n");
    scanf("%d", &codigo);

    switch (codigo)
    {
    case 1:
        system("cls || clear");
        printf(" Código                              Prato                                 Preço \n");
        printf("   1                                 Picanha                               R$25,00 \n");
        break;
    case 2:
        system("cls || clear");
        printf(" Código                              Prato                                 Preço \n");
        printf("   2                                 Lasanha                               R$20,00 \n");
        break;
    case 3:
        system("cls || clear");
        printf(" Código                              Prato                                 Preço \n");
        printf("   3                                 Strogonoff                            R$18,00 \n");
        break;
    case 4:
        system("cls || clear");
        printf(" Código                              Prato                                 Preço \n");
        printf("   4                                 Bife acebolado                        R$13,00 \n");
        break;
    case 5:
        system("cls || clear");
        printf(" Código                              Prato                                 Preço \n");
        printf("   5                                 Pão com pão                           R$5,00 \n");
        break;
    default:
        system("cls || clear");
        printf("código inválido");
        break;
    }

    return 0;
}