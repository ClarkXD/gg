#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <time.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    int i;
    int Numero[10];
    int somaPositivo = 0, negativo;

    for ( i = 0; i < 10; i++){
        printf("Digite o %dº Numero: ",i + 1);
        scanf("%d", &Numero[i]);
        if (Numero[i] > 0){
    somaPositivo += Numero[i];
   } else {
    negativo++;
   }
    }
    
    
   printf("Contagem de Positivo: %d \n", somaPositivo);
   printf("Quantidade de Negativo: %d \n", negativo);

    return 0;
}