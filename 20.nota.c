#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main () { 

    setlocale(LC_ALL, "portuges");

    float nota;
    char resposta;
    float soma = 0;
    int i = 1;

    printf("Digite a 1� nota: ");
    scanf("%f", &nota);
    soma += nota;
    int contagem = 1;

   fflush(stdin);

   printf("deseja adicionar mas uma nota ? ");
   scanf("%c", &resposta);
    
   while (resposta != 'N') {
     
      i++;

      printf("\nDigite a %d� nota : ", i);
      scanf("%f", &nota);
      soma += nota;
      contagem++;

      fflush(stdin);

      printf("Deseja adicionar mais uma nota ? ");
      scanf("%c", &resposta);


    }
   



float media = (float) soma / contagem;
printf("\nM�dia: %.2f", media);

    return 0;
 }