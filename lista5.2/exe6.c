//Faça um programa que receba um nome (em maiúsculo ou minúsculo) do usuário e informe o nome com todos os caracteres em maiúsculo.
#include <stdio.h>
#include <ctype.h>

int main() {
    char nome[100];
    int i;

    printf("Digite um nome: ");
    fgets(nome, sizeof(nome), stdin);

    for (i = 0; nome[i] != '\0'; i++) {
        nome[i] = toupper(nome[i]);
    }

    printf("Nome maiusculo: %s", nome);

    return 0;
}
