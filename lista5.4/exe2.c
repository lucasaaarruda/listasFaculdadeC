//Faça um programa que declare duas variáveis do tipo Pessoa, onde Pessoa deve ser uma struct contendo nome e idade.
//O programa deve receber os dados dados das duas pessoas em seguida exibir o nome da pessoa mais velha.
#include <stdio.h>

typedef struct {
    char nome[101];
    int idade;
} Pessoa;

int main() {
    Pessoa pessoa1, pessoa2;

    printf("Entre com o nome da primeira pessoa: ");
    scanf("%100s", pessoa1.nome);
    printf("Entre com a idade da primeira pessoa: ");
    scanf("%d", &pessoa1.idade);

    printf("\nEntre com o nome da segunda pessoa: ");
    scanf("%100s", pessoa2.nome);
    printf("Entre com a idade da segunda pessoa: ");
    scanf("%d", &pessoa2.idade);

    if (pessoa1.idade > pessoa2.idade) {
        printf("\n%s é a pessoa mais velha.\n", pessoa1.nome);
    } else if (pessoa2.idade > pessoa1.idade) {
        printf("\n%s é a pessoa mais velha.\n", pessoa2.nome);
    } else {
        printf("\n%s e %s têm a mesma idade.\n", pessoa1.nome, pessoa2.nome);
    }
    return 0;
}
