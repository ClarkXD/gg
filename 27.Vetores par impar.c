#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <time.h>

int main() {

    setlocale(LC_ALL, "portuguese");

    int Numero[6];
    int i;
    int par = 0;
    int impar = 0;

        for ( i = 0; i < 6; i++) {
        printf("Digite um %d� Numero:",i + 1);
        scanf("%d", &Numero[i]);

        if (Numero[i] % 2 == 0 ){
            par++;
            }else{
            impar++;
         }
        }
     
    
    system("cls || clear");

     for ( i = 0; i < 6; i++){
        printf("%dº Numero: %d \n", i + 1, Numero[i]);
        }
       
        printf("Quantidade par %d\n", par);
        printf("Quantidade impar %d\n", impar);



    
    return 0;
}