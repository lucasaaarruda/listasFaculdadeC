//Jogo da soma, faça um programa que sorteia dois números e pergunte ao usuário qual o total da soma dos dois números sorteados, após o usuário informar o total,
//o programa deverá informar se o usuário acertou ou errou a conta, em seguida questionar se o usuário deseja jogar novamente ou não,
//caso positivo uma nova conta deve ser sorteada. O usuário poderá jogar quantas vezes desejar.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num1, num2, resp, soma;
    char jogar_novamente;

    srand(time(NULL));

    do {
        num1 = rand() % 10 + 1;
        num2 = rand() % 10 + 1;
        soma = num1 + num2;

        printf("Qual e o resultado de %d + %d? ", num1, num2);
        scanf("%d", &resp);

        if (resp == soma) {
            printf("Voce acertou!\n");
        } else {
            printf("Voce errou! O resultado correto e %d.\n", soma);
        }
        printf("Deseja jogar novamente? (s/n): ");
        scanf(" %c", &jogar_novamente);

    } while (jogar_novamente == 's' || jogar_novamente == 'S');

    printf("Obrigado por jogar!\n");

    return 0;
}
