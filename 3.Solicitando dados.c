#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    // Declaração de variaveis
    int idade;
    float peso;
    char sexo [500];
    char nome [500];

        // Solicitar dados do usuario
        printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite seu peso: ");
    scanf("%f", &peso);

    fflush(stdin); // Linpar o cache de input.

    printf("Digite o seu Sexo: ");
    gets(sexo);

    printf("Digite o seu Nome: ");
    gets(nome);
    
    // nome[strcspn(nome,"\n")] = 0
    // fgets(nome, 50, stdin);
    // scanf("%s", &nome);

    system("cls || clear"); // Limpar tela.

    // Aparecer os dados do usoario pedido. 
    printf("Idade: %d anos. \n", idade);
    printf("Peso: %f Kg. \n", peso);
    printf("Nome: %s \n", nome);
    printf("Sexo: %s \n", sexo);

    return 0;
}