//Faça um programa que declare uma matriz 3x3 e receba os valores do usuário, em seguida exiba todos os valores e a quantidade elementos na matriz que possui o valor 7.
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
    int contadorSete = 0;

    printf("Digite os valores para a matriz 3x3:\n");
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            printf("Matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            if (matriz[i][j] == 7) {
                contadorSete++;
            }
        }
    }
    exibirMatriz(matriz);
    printf("A quantidade de elementos com o valor 7 é: %d\n", contadorSete);

    return 0;
}
