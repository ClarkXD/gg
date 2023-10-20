#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){

    int idade;


    printf("Ponha sua idade: ");
    scanf("%d", &idade);


    if (idade > 65 || idade < 18){
        printf("Nao pode votar! ");
    }else {
        printf("Pode Votar! ");
    }

/*
if (idade >= 18 && idade <= 65){
    

    idade < 18 || idade > 65 ?
    strcpy(resultado, "Nao e obrigado a votar");
    strcpy(resultado, "E obrigado a votar");

    printf("%s", resultado);
}

*/

    return 0;
}
