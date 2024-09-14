//Um quadrado mágico é uma matriz quadrada em que a soma das suas linhas é igual a soma de suas colunas e que também é igual a soma da diagonal principal e da diagonal secundária.
//A matriz abaixo é um exemplo de quadrado mágico, pois a somatória, em todos os casos, é igual a 15.
//Escreva um algoritmo que leia uma matriz de tamanho 3 x 3 e, ao final, imprima se esta matriz é ou não um quadrado mágico.
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
int verificarQuadradoMagico(int matriz[TAM][TAM]) {
    int i, j;
    int somaLinha, somaColuna, somaDiagonalPrincipal = 0, somaDiagonalSecundaria = 0;
    int somaEsperada;
    for (i = 0; i < TAM; i++) {
        somaDiagonalPrincipal += matriz[i][i];
    }
    for (i = 0; i < TAM; i++) {
        somaDiagonalSecundaria += matriz[i][TAM - i - 1];
    }
    if (somaDiagonalPrincipal != somaDiagonalSecundaria) {
        return 0;
    }
    for (i = 0; i < TAM; i++) {
        somaLinha = 0;
        somaColuna = 0;
        for (j = 0; j < TAM; j++) {
            somaLinha += matriz[i][j];
            somaColuna += matriz[j][i];
        }
        if (i == 0) {
            somaEsperada = somaLinha;
        }
        if (somaLinha != somaEsperada || somaColuna != somaEsperada) {
            return 0;
        }
    }
    return 1;
}
int main() {
    int matriz[TAM][TAM];
    int i, j;

    printf("Digite os valores para a matriz 3x3:\n");
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            printf("Matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    exibirMatriz(matriz);

    if (verificarQuadradoMagico(matriz)) {
        printf("A matriz é um quadrado mágico.\n");
    } else {
        printf("A matriz não é um quadrado mágico.\n");
    }
    return 0;
}
