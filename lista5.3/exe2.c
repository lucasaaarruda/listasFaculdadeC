//Faça um programa que declara uma matriz 3x3 e permite ao usuário informar o valor para cada uma das posições da matriz, em seguida exiba todos os valores da matriz.
#include <stdio.h>

int main() {
    int matriz[3][3];
    int i, j;

    printf("Informe os valores para a matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Digite o valor para a posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("\nValores da matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
