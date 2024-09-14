//Utilizando o conhecimento adquirido no código 1 para sortear um número no intervalo de 1 a 5, faça um programa que simule um jogo de par ou ímpar entre você e o computador.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ePar(int num) {
    return num % 2 == 0;
}

int main() {
    int numeroUsuario, numeroComputador;
    char escolhaUsuario;
    int soma;

    srand(time(NULL));

    printf("Digite um número entre 1 e 10: ");
    scanf("%d", &numeroUsuario);

    if (numeroUsuario < 1 || numeroUsuario > 10) {
        printf("Número inválido. Por favor, escolha um número entre 1 e 10.\n");
        return 1;  // Encerra o programa com código de erro
    }
    printf("Escolha 'p' para par ou 'i' para ímpar: ");
    scanf(" %c", &escolhaUsuario);

    numeroComputador = (rand() % 10) + 1;

    soma = numeroUsuario + numeroComputador;

    if (escolhaUsuario == 'p' || escolhaUsuario == 'P') {
        if (ePar(soma)) {
            printf("Você escolheu par e a soma é %d. Você ganhou!\n", soma);
        } else {
            printf("Você escolheu par e a soma é %d. Você perdeu!\n", soma);
        }
    } else if (escolhaUsuario == 'i' || escolhaUsuario == 'I') {
        if (!ePar(soma)) {
            printf("Você escolheu ímpar e a soma é %d. Você ganhou!\n", soma);
        } else {
            printf("Você escolheu ímpar e a soma é %d. Você perdeu!\n", soma);
        }
    } else {
        printf("Escolha inválida. Por favor, escolha 'p' para par ou 'i' para ímpar.\n");
    }
    return 0;
}
