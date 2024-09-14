//Faça um programa que declare uma matriz 3x3 e receba os valores do usuário, em seguida exiba todos os valores e a soma de todos valores.
#include <stdio.h>

#define TAM 3

void exibirMatriz(int matriz[TAM][TAM]) {
    int i, j;
    printf("\nMatriz:\n");
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
int main() {
    int matriz[TAM][TAM];
    int i, j;
    int soma = 0;

    printf("Digite os valores para a matriz 3x3:\n");
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            printf("Matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            soma += matriz[i][j];
        }
    }
    exibirMatriz(matriz);
    printf("A soma de todos os valores da matriz é: %d\n", soma);

    return 0;
}
