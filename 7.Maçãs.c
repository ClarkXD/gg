#include <stdio.h>
#include <stdlib.h>



int main(){


int quantidade;
float preco; 
float valorunitario;

printf("Quantas maças vocé quer? ");
scanf("%d", &quantidade);

if (quantidade < 12){
    valorunitario = 1.30;
} else {
    valorunitario = 1;
}
// valorunitario = quantidade < 12 ? 1.30 : 1.0;
preco = quantidade * valorunitario;

printf("Quantidade de maçãs: %d \n", quantidade);
printf("Valor da unidade: %.2f \n", valorunitario);
printf("Valor final: %.2f \n", preco);






system("pause"); // pause windows
getchar(); // pause todos 
   return 0; 
}