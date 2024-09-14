//Faça um programa que declara uma matriz 3x3 e permite ao usuário informar o valor para cada uma das posições da matriz, em seguida exiba o maior valor da matriz.
#include <stdio.h>

int main() {
    int matriz[3][3];
    int i, j;
    int maior;

    printf("Informe os valores para a matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Digite o valor para a posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    maior = matriz[0][0];

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
        }
    }
    printf("O maior valor da matriz é: %d\n", maior);

    return 0;
}
