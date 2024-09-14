//Sabendo que o código da figura 1 sorteia um número entre 1 e 5, modifique o que for necessário neste código para fazer um jogo de adivinhar um número,
//onde o computador deverá sortear um número no intervalo de 1 a 5 e o usuário deverá informar um número no mesmo intervalo. Seu programa deve comparar os dois números e informar se o
//usuário acertou ou errou o número que o computador “pensou”.
//Código 1. Sortear número
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroComputador, numeroUsuario;

    srand(time(NULL));

    numeroComputador = (rand() % 5) + 1;

    printf("Adivinhe o número (entre 1 e 5): ");
    scanf("%d", &numeroUsuario);

    if (numeroUsuario < 1 || numeroUsuario > 5) {
        printf("Número inválido. Por favor, escolha um número entre 1 e 5.\n");
    } else {
        if (numeroUsuario == numeroComputador) {
            printf("Parabéns! Você acertou! O número era %d.\n", numeroComputador);
        } else {
            printf("Você errou. O número era %d.\n", numeroComputador);
        }
    }
    return 0;
}
