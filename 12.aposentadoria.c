#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main () {

setlocale (LC_ALL, "portuguese");

int codigo;
int nascimento;
int tempo;

printf("insira seu código:\n");
scanf("%d", &codigo);

printf("Insira seu ano de nascimento:\n");
scanf("%d", &nascimento);

printf("Insira seu tempo de trabalho:\n");
scanf("%d", &tempo);

if (nascimento >= 1958 || tempo >= 30) {
system("cls || clear");
printf("pode se aposentar!\n");
} else {
system("cls || clear");
printf("pode se aposentar!\n");    
}

system("pause");
    return 0;
}