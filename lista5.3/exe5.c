//Faça um jogo da velha.
#include <stdio.h>

#define TAM 3

void exibirTabuleiro(char tabuleiro[TAM][TAM]) {
    int i, j;
    printf("\n");
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            printf(" %c ", tabuleiro[i][j]);
            if (j < TAM - 1) printf("|");
        }
        printf("\n");
        if (i < TAM - 1) printf("-----------\n");
    }
    printf("\n");
}
int main() {
    char tabuleiro[TAM][TAM] = { {' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '} };
    int linha, coluna;
    char jogadorAtual = 'X';
    int jogadas = 0;

    while (1) {
        exibirTabuleiro(tabuleiro);

        printf("Jogador %c, insira a linha e a coluna (0-2): ", jogadorAtual);
        scanf("%d %d", &linha, &coluna);

        if (linha >= 0 && linha < TAM && coluna >= 0 && coluna < TAM && tabuleiro[linha][coluna] == ' ') {
            tabuleiro[linha][coluna] = jogadorAtual;
            jogadas++;

            int i;
            int ganhou = 0;

            for (i = 0; i < TAM; i++) {
                if ((tabuleiro[i][0] == jogadorAtual && tabuleiro[i][1] == jogadorAtual && tabuleiro[i][2] == jogadorAtual) ||
                    (tabuleiro[0][i] == jogadorAtual && tabuleiro[1][i] == jogadorAtual && tabuleiro[2][i] == jogadorAtual)) {
                    ganhou = 1;
                    break;
                }
            }
            if (!ganhou) {
                if ((tabuleiro[0][0] == jogadorAtual && tabuleiro[1][1] == jogadorAtual && tabuleiro[2][2] == jogadorAtual) ||
                    (tabuleiro[0][2] == jogadorAtual && tabuleiro[1][1] == jogadorAtual && tabuleiro[2][0] == jogadorAtual)) {
                    ganhou = 1;
                }
            }
            if (ganhou) {
                exibirTabuleiro(tabuleiro);
                printf("Parabens! O jogador %c venceu!\n", jogadorAtual);
                break;
            }
            if (jogadas == TAM * TAM) {
                exibirTabuleiro(tabuleiro);
                printf("Empate!\n");
                break;
            }
            jogadorAtual = (jogadorAtual == 'X') ? 'O' : 'X';
        } else {
            printf("Posicao invalida ou ja ocupada. Tente novamente.\n");
        }
    }
    return 0;
}
