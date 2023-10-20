#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    int primeronumero, segundonumero, terceronumero;
    // int Maior, menor;

    printf("Digite o Primero Numero°: ");
    scanf("%d", &primeronumero);

    printf("Digite o segundo Numero°: ");
    scanf("%d", &segundonumero);

    printf("Digite o terceiro Numero°: ");
    scanf("%d", &terceronumero);

    system("cls || clear");

    printf("Pimero Numero°: %d \n", primeronumero);
    printf("Segundo Numero°: %d \n", segundonumero);
    printf("Terceiro Numero°: %d \n", terceronumero);

    printf("Maior Numero: ");
    if (primeronumero > segundonumero && primeronumero > terceronumero)
    {
        printf("%d\n", primeronumero);
    }
    else if (segundonumero > primeronumero && segundonumero > terceronumero)
    {
        printf("%d\n", segundonumero);
    }
    else
    {
        printf("%d\n", terceronumero);
    }

    printf("Menor Numero: ");
    if (primeronumero < segundonumero && primeronumero < terceronumero)
    {
        printf("%d\n", primeronumero);
    }
    else if (segundonumero < primeronumero && segundonumero < terceronumero)
    {
        printf("%d\n", segundonumero);
    }
    else
    {
        printf("%d\n", terceronumero);
    }

    /*
        maior = primeronumero > segundonumero ? primeronumero : segundonumero;
        maior = maior > terceironumero ? maior : terceronumero;

        menor = primeronumero < segundonumero ? primeronumero : segundonumero;
        menor + menor < terceronumero ? menor : terceronumero;

    */

    return 0;
}