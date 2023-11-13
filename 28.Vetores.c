#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <time.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    int i;
    int idade[5]; //Vetor
    char nomes[5][250]; //Vetor de Strings

    for ( i = 0; i < 5; i++){
        fflush(stdin);
        printf("Digite o %cº Nome: ",i +1);
        gets(nomes[i]);
        fflush(stdin);
        printf("Digite a %dº Idade: ",i + 1);
        scanf("%d", &idade[i]);
    }
    
    for ( i = 0; i < 5; i++){
        printf("%dº Nome: %s \n", i + 1, nomes[i]);
        printf("%dº Idade: %d \n", i + 1, idade[i]);
    }

    return 0;
}
