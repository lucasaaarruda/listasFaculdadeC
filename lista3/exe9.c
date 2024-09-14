//Pense em um programa que utilize if, descreva o mesmo e construa o programa em C
//O programa é um "verificador de idade", que determina se uma pessoa é maior de idade ou menor de idade com base na idade inserida pelo usuário.
#include <stdio.h>

int main() {
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18) {
        printf("Você é maior de idade.\n");
    } else {
        printf("Você é menor de idade.\n");
    }
    return 0;
}
