#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{

  setlocale(LC_ALL, "portuguese");

  int numero;

  printf("Digite um n�mero de 1 � 7:");
  scanf("%d", &numero);

  system("cls || clear");

  switch (numero)
  {
  case 1:
    printf("Domingo. \n");
    printf("N�o � um dia �til\n");
    break;
  case 2:
    printf("Segunda. \n");
    printf("Dia �til\n");
    break;
  case 3:
    printf("Ter�a. \n");
    printf("Dia �til\n");
    break;
  case 4:
    printf("Quarta. \n");
    printf("Dia �til\n");
    break;
  case 5:
    printf("Quinta. \n");
    printf("Dia �til\n");
    break;
  case 6:
    printf("Sexta. \n");
    printf("Dia �til\n");
    break;
  case 7:
    printf("S�bado. \n");
    printf("Dia �til\n");
    break;
  default:
    printf("N�mero Inv�lido\n");
    break;
  }

  system("pause");

  return 0;
}