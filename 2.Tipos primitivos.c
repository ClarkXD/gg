/*tipos de Variaves para lingugen c
int
float
char
          etc.
*/



//Padrao
#include <stdio.h>
#include <stdlib.h>

int main(){

    int idade = 20;    // inteiro
    float peso = 80.2; // real
    char sexo = 'F';   // apenas um caracter
    char nome  [50] = "Marta"; //Numeor de letas que eu aceito





    printf("Idade: %d anos. \n", idade);
    printf("Peso: %.1f Kg. \n", peso);
    printf("Sexo: %c \n", sexo);
    printf("Nome: %s \n", nome);




    return 0;
}
