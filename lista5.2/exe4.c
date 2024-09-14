//Faça um programa que receba 10 valores numéricos, em seguida exiba a média e a mediana destes valores.
#include <stdio.h>

#define tamanho 10

void ordenar(int vetor[], int n) {
    int i, j, temp;

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (vetor[i] > vetor[j]) {
                temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
        }
    }
}
int main() {
    int valores[tamanho];
    int i;
    float soma = 0, media, mediana;

    printf("Digite %d valores:\n", tamanho);
    for (i = 0; i < tamanho; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &valores[i]);
        soma += valores[i];
    }
    media = soma / tamanho;

    ordenar(valores, tamanho);

    mediana = (valores[4] + valores[5]) / 2.0;

    printf("\nMedia: %.2f\n", media);
    printf("Mediana: %.2f\n", mediana);

    return 0;
}
