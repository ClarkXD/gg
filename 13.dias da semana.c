#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{

  setlocale(LC_ALL, "portuguese");

  int numero;

  printf("Digite um número de 1 à 7:");
  scanf("%d", &numero);

  system("cls || clear");

  switch (numero)
  {
  case 1:
    printf("Domingo. \n");
    printf("Não é um dia útil\n");
    break;
  case 2:
    printf("Segunda. \n");
    printf("Dia útil\n");
    break;
  case 3:
    printf("Terça. \n");
    printf("Dia útil\n");
    break;
  case 4:
    printf("Quarta. \n");
    printf("Dia útil\n");
    break;
  case 5:
    printf("Quinta. \n");
    printf("Dia útil\n");
    break;
  case 6:
    printf("Sexta. \n");
    printf("Dia útil\n");
    break;
  case 7:
    printf("Sábado. \n");
    printf("Dia útil\n");
    break;
  default:
    printf("Número Inválido\n");
    break;
  }

  system("pause");

  return 0;
}