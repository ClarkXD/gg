#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <time.h>

int main () { 
    setlocale(LC_ALL, "portuges");

    int Maioridade = 0, Menoridade = 150;
    int idade;
    float Somasalario = 0;
    int soma;
    char  sexo;
    float salario;
    int comtagemMulher = 0;
    int codigo;
    int comtagemsalario = 0;
    
do
{
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    if (idade > Maioridade){
        Maioridade = idade;
    } else if (idade < Menoridade){
        Menoridade = idade;
    }
    
    fflush(stdin);

    printf("Digite seu sexo: ");
    scanf("%c", &sexo);

    printf("Digite seu Salario: ");
    scanf("%f", &salario);
    Somasalario += salario;
    comtagemsalario++;

    if (sexo == 'f' && salario > 5000){
        comtagemMulher++;
    }

    system("cls || clear");

    printf("Codigo ||       Opic�o           ");
    printf("   1   ||  Adicionar pessoa      ");
    printf("   2   ||  Sai e exibir resutado ");
    
    printf("Digite o codigo:");
    scanf("%d", &codigo);
    
} while (codigo == 1);

    
    


//sleep(3); votar msg

    return 0;
} 