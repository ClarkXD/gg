#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <time.h>

int main () { 
    
    setlocale(LC_ALL, "portuges");

    float Maiorsalario = 0, Menorsalario = 150;
    int filhos = 0;
    float Somafilhos = 0;
    int comtagem = 0;
    float Somasalario = 0;
    float salario;
    int codigo;

    do
    { 
        
        printf("Digite quantos Filhos Vocés tem:  ");
        scanf("%d", &filhos);
            Somafilhos += filhos;
        comtagem++;

        printf("Digite o Salario da Familhia:  ");
        scanf("%f", &salario);
        Somasalario += salario;
        
        if (salario > Maiorsalario){
            Maiorsalario = salario;
        } else if (salario < Menorsalario){
            Menorsalario = salario;
        
        }

        
        
        
        system("cls || clear");

    printf("Codigo ||        Opicão\n");
    printf("   1   ||   Adicionar pessoa\n");
    printf("   2   ||  Sai e exibir resutado\n");
    
    printf("Digite o codigo:");
    scanf("%d", &codigo);

    } while (codigo == 1);
    
 float mediaSalario = Somasalario / comtagem;
 float mediafilhos = Somafilhos / comtagem;
 

//sleep(3); votar msg
printf("Total de Familhias: %d\n",comtagem);
printf("Menor Salario: %.3f\n", mediafilhos);
printf("Menor Salario: %.3f\n", mediaSalario);
printf("Menor Salario: %.2f\n", Menorsalario);
printf("Menor Salario: %.2f\n", Menorsalario);


    return 0;
} 