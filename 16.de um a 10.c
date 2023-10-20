#include <stdlib.h>
#include <locale.h>
#include <stdio.h>


int main ()  {

    setlocale(LC_ALL, "portuguese");

    int i, numero;

    printf("Digite um número para tabuada: ");
    scanf("%d", &numero);

    for ( i = 1; i <= 20; i++){
        printf("%d x %d = %d \n", numero, i, numero * i);
    }
    





   /* for ( i = 1; i <= 10; i++){
        printf("3 x %d = %d \n", i, 3 * i);

        
    }

    for ( i = 1; i <= 10; i++){
        printf("5 x %d = %d \n", i, 5 * i);

        
    }

    for ( i = 1; i <= 10; i++){
        printf("7 x %d = %d \n", i, 7 * i);

        
    }
    

   // for ( i = 1; i <= 10; i++){
       // printf("%d \n", i);
    // }

     for (j = 1; j <= 10; j++) {
        printf("\nTabuada de %d \n", j);
        for (i = 1; i <= 10; i++) {
            printf("%d x %d = %d \n", j, i, j * i);
        }
    }

    */


    return 0;
}