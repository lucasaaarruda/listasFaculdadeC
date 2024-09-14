//Faça um programa que exiba um menu, onde o usuário pode escolher um número de 1 a 5, após a escolha do usuário, o programa deverá exibir o número escolhido por extenso.
#include <stdio.h>

int main() {
    int escolha;

    printf("Escolha um número de 1 a 5:\n");
    printf("1 - Um\n");
    printf("2 - Dois\n");
    printf("3 - Três\n");
    printf("4 - Quatro\n");
    printf("5 - Cinco\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            printf("Você escolheu: Um\n");
            break;
        case 2:
            printf("Você escolheu: Dois\n");
            break;
        case 3:
            printf("Você escolheu: Três\n");
            break;
        case 4:
            printf("Você escolheu: Quatro\n");
            break;
        case 5:
            printf("Você escolheu: Cinco\n");
            break;
        default:
            printf("Escolha inválida. Por favor, escolha um número entre 1 e 5.\n");
            break;
    }
    return 0;
}
