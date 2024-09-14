//Utilização da função strcpy()
#include <stdio.h>
#include <string.h>

void main(){
    char nome[201], destino[201];

    strcpy(nome, "Lucas Ribeiro");
    strcpy(destino, nome);
    printf("\nNome: %s\tDestino: %s\n", nome, destino);
}