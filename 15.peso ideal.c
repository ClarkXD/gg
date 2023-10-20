#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
setlocale(LC_ALL, "portuguese");

char sexo;
float altura;
float pesoIdeal;

printf("Digite seu sexo:\n");
scanf("%c", &sexo);

printf("Digite sua altura:\n");
scanf("%f", &altura);

switch (sexo) {
case 'm':
pesoIdeal = (72.7 * altura) - 58;
    break;
case 'f':
pesoIdeal = (62.1 * altura) - 44.7;
    break;
default:
printf("Coloque somente f ou m.\n");
    break;
}

printf("Peso ideal: %.2f", pesoIdeal);

return 0;    
}