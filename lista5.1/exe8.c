//Modifique o programa do exercício 5 para que ele exiba além da soma das idades, a maior idade.
#include <stdio.h>
#include <stdlib.h>

int main(){
    int *idades;
    int qtd_alunos;
    int i;
    int soma_idades = 0;
    int maior_idade = 0;

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

        if (idades[i] > maior_idade){
            maior_idade = idades[i];
        }
    }
    printf("\nTotal da soma das idades dos alunos: %d\n", soma_idades);
    printf("A maior idade entre os alunos é: %d\n", maior_idade);

    free(idades);

    return 0;
}
