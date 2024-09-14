// Sabendo que no final da string é adicionado o caracter '\0'.
// Faça um programa que ao receber uma string, informe quantos caracteres tem a string
#include <stdio.h>

void main(){
    char nome[201];

    printf("Entre com o seu nome: ");
    fgets(nome, sizeof(nome), stdin);

    printf("\nOla %s\n", nome);
    
    int x;
    
    for (x=0; nome[x] != '\n'; x++){}
    
    printf("Quantidade de caracteres: %d\n", --x);
}