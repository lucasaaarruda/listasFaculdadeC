//Faça um programa que permita ao usuário informa a quantidade de alunos na sala, em seguida receba a idade de todos os alunos da sala e exiba TODAS AS IDADES em ordem crescente.
#include <stdio.h>

void ordenar(int vetor[], int tamanho) {
    int i, j, temp;
    for (i = 0; i < tamanho - 1; i++) {
        for (j = i + 1; j < tamanho; j++) {
            if (vetor[i] > vetor[j]) {
                temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
        }
    }
}

int main() {
    int i, n;

    printf("Digite a quantidade de alunos na sala: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Quantidade de alunos deve ser um número positivo.\n");
        return 1;
    }

    int idades[n];

    printf("Digite a idade de cada aluno:\n");
    for (i = 0; i < n; i++) {
        printf("Idade do aluno %d: ", i + 1);
        scanf("%d", &idades[i]);
    }

    ordenar(idades, n);

    printf("\nIdades em ordem crescente:\n");
    for (i = 0; i < n; i++) {
        printf("%d\n", idades[i]);
    }
    return 0;
}
