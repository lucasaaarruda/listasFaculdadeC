//Faça um programa que apresente na tela um menu para gerenciar uma conta de bar. Neste menu deve ter as opções, Adicionar mais pessoas, Adicionar mais custos e dividir a conta.
#include <stdio.h>

#define MAX_PESSOAS 100

int main() {
    int opcao;
    int numPessoas = 0;
    double custos = 0.0;
    double custoPorPessoa = 0.0;
    int pessoas[MAX_PESSOAS];

    while (1) {
        printf("\nMenu de Gerenciamento da Conta do Bar:\n");
        printf("1 - Adicionar mais pessoas\n");
        printf("2 - Adicionar mais custos\n");
        printf("3 - Dividir a conta\n");
        printf("4 - Sair\n");
        printf("Digite sua escolha: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                if (numPessoas < MAX_PESSOAS) {
                    printf("Quantas pessoas você deseja adicionar? ");
                    int adicionar;
                    scanf("%d", &adicionar);
                    if (adicionar > 0 && numPessoas + adicionar <= MAX_PESSOAS) {
                        numPessoas += adicionar;
                        printf("Número total de pessoas: %d\n", numPessoas);
                    } else {
                        printf("Número inválido ou excede o limite máximo.\n");
                    }
                } else {
                    printf("Número máximo de pessoas já foi alcançado.\n");
                }
                break;

            case 2:
                {
                    double custo;
                    printf("Digite o valor do custo a ser adicionado: ");
                    scanf("%lf", &custo);
                    if (custo > 0) {
                        custos += custo;
                        printf("Custo total atualizado: %.2f\n", custos);
                    } else {
                        printf("Valor do custo inválido.\n");
                    }
                }
                break;

            case 3:
                if (numPessoas > 0) {
                    custoPorPessoa = custos / numPessoas;
                    printf("Cada pessoa deve pagar: %.2f\n", custoPorPessoa );
                } else { 
                        printf("Nenhuma pessoa registrada para dividir a conta.\n");
                }
                break;

            case 4: 
                printf("Saindo do programa.\n");
                return 0;

            default:
                printf("Opção inválida. Por favor, escolha uma opção entre 1 e 4.\n");
        }
    }
    return 0;
}
