//Conta de bar, faça um programa que permita ao usuário controlar uma conta de bar. O programa deve ter um menu que permite ao usuário incluir mais pessoas na mesa, incluir mais custos,
//consultar o custo total da conta e o valor rateado (dividido) entre todos da mesa, incluído os 10% do garçom.
#include <stdio.h>

int main() {
    int opcao, pessoas = 0;
    float valor_total = 0.0, custo, valor_dividido;

    do {
        printf("\n--- Conta de Bar ---\n");
        printf("1. Incluir mais pessoas na mesa\n");
        printf("2. Incluir mais gastos\n");
        printf("3. Consultar valor total da conta\n");
        printf("4. Consultar valor dividido por pessoa (incluindo 10%% do garçom)\n");
        printf("5. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Quantas pessoas deseja adicionar? ");
                int novas_pessoas;
                scanf("%d", &novas_pessoas);
                pessoas += novas_pessoas;
                printf("Total de pessoas na mesa: %d\n", pessoas);
                break;

            case 2:
                printf("Digite o valor do gasto a ser adicionado: ");
                scanf("%f", &custo);
                valor_total += custo;
                printf("Gasto adicionado com sucesso. Custo total atual: R$ %.2f\n", valor_total);
                break;

            case 3:
                printf("Valor total da conta: R$ %.2f\n", valor_total);
                break;

            case 4:
                if (pessoas == 0) {
                    printf("Não ha pessoas na mesa para dividir o valor.\n");
                } else {
                    float total_gorjeta = valor_total * 1.10;
                    valor_dividido = total_gorjeta / pessoas;
                    printf("Valor rateado por pessoa (incluindo 10%% do garçom): R$ %.2f\n", valor_dividido);
                }
                break;

            case 5:
                printf("Saindo do programa...\n");
                break;

            default:
                printf("Opçao invalida! Tente novamente.\n");
                break;
        }
    } while (opcao != 5);
    
    return 0;
}
