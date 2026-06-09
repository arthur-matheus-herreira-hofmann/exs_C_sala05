#include<stdio.h>
#include<stdlib.h>

int main(){

    char text, nome[1000];
    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Digite seu texto: ");
    scanf("%s", text);
    printf("o nome informado foi: %s \n", nome);
    printf("o texto informado foi: %s \n", text);

    system("pause");
    return 0;

}