//Faça um programa que receba a quantidade de alunos em uma sala de aula, em seguida receba a idade de todos os alunos e exiba o total da soma da idade de todos os alunos.
//Utilize obrigatoriamente um vetor para armazenar as idades.
#include <stdio.h>
#include <stdlib.h>

int main(){
    int *idades;
    int qtd_alunos;
    int i;
    int soma_idades;

    do {
        printf("Digite a quantidade de alunos: ");
        scanf("%d", &qtd_alunos);

        if (qtd_alunos <=0){
            printf("Quantidade invalida! O valor deve ser positivo.\n");
        }
    } while (qtd_alunos <= 0);

    idades = (int *)malloc(qtd_alunos * sizeof(int));

    if (idades == NULL){
        printf("Erro na alocação de memória.\n");
        return 1;
    }
    for (i = 0; i < qtd_alunos; i++){
        printf("Digite a idade do aluno %d: ", i + 1);
        scanf("%d", &idades[i]);
        soma_idades += idades[i];
    }
    printf("\nTotal da soma das idades dos alunos: %d\n", soma_idades);

    free(idades);

    return 0;
}
