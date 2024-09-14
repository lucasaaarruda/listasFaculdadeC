//Faça um programa que exibe um menu com as opções: sair, somar, multiplicar, dividir, onde a opção sair deve abandonar o programa e as demais opções deve receber dois números
//e efetuar o cálculo de acordo com o nome da opção. Após o cálculo, o programa deve retornar ao menu principal, é obrigatório o uso de funções.
#include <stdio.h>

double somar(double a, double b) {
    return a + b;
}
double multiplicar(double a, double b) {
    return a * b;
}
double dividir(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Erro: Divisao por zero!\n");
        return 0;
    }
}
int exibirMenu() {
    int opcao;
    printf("\nMenu:\n");
    printf("0 - Sair\n");
    printf("1 - Somar\n");
    printf("2 - Multiplicar\n");
    printf("3 - Dividir\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);
    return opcao;
}
int main() {
    int opcao;
    double num1, num2, resultado;

    do {
        opcao = exibirMenu();

        if (opcao >= 1 && opcao <= 3) {
            printf("\nEntre com o primeiro numero: ");
            scanf("%lf", &num1);
            printf("Entre com o segundo numero: ");
            scanf("%lf", &num2);
        }
        switch(opcao) {
            case 0:
                printf("Saindo...\n");
                break;
            case 1:
                resultado = somar(num1, num2);
                printf("Resultado da soma: %.2lf\n", resultado);
                break;
            case 2:
                resultado = multiplicar(num1, num2);
                printf("Resultado da multiplicacao: %.2lf\n", resultado);
                break;
            case 3:
                resultado = dividir(num1, num2);
                if (num2 != 0) {
                    printf("Resultado da divisao: %.2lf\n", resultado);
                }
                break;
            default:
                printf("Opcao invalida!\n");
                break;
        }
    } while (opcao != 0);
    return 0;
}
