//Faça um programa que declare duas matriz 3x3 e receba do usuário os valores para cada posição desta matriz,
//em seguida crie uma nova matriz contendo em cada posição a soma dos valores das duas primeiras matrizes na mesma posição.
#include <stdio.h>

#define TAM 3

void exibirMatriz(int matriz[TAM][TAM]) {
    int i, j;
    printf("\n");
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
int main() {
    int matriz1[TAM][TAM], matriz2[TAM][TAM], matrizSoma[TAM][TAM];
    int i, j;

    printf("Digite os valores para a primeira matriz 3x3:\n");
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            printf("Matriz1[%d][%d]: ", i, j);
            scanf("%d", &matriz1[i][j]);
        }
    }
    printf("Digite os valores para a segunda matriz 3x3:\n");
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            printf("Matriz2[%d][%d]: ", i, j);
            scanf("%d", &matriz2[i][j]);
        }
    }
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            matrizSoma[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
    printf("\nMatriz 1:\n");
    exibirMatriz(matriz1);

    printf("Matriz 2:\n");
    exibirMatriz(matriz2);

    printf("Matriz Soma:\n");
    exibirMatriz(matrizSoma);

    return 0;
}
