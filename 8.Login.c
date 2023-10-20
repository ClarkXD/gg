#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){

setlocale(LC_ALL, "portuguese");

char loginSalvo [200] = "Clark";  
char senhaSalva [200] = "1234";
char login [200];
char senha [200];

    printf("Digite seu login: ");
    gets(login);

    printf("Digite sua senha: ");
    gets(senha);

if (strcmp(loginSalvo,login) == 0 && strcmp(senhaSalva,senha) == 00) {
    printf("Bem Vindo! ");
}else{
    printf("Login ou senha incoreta! ");
}


getchar();
    return 0;
}