//Faça um programa que declare uma estrutura capaz de armazenar 3 inteiros, para representar uma data que é composta por dia, mês e ano,
//em seguida faça um exemplo atribuição e recuperação de valores para esta estrutura.
#include <stdio.h>

struct Data {
    int dia;
    int mes;
    int ano;
};

int main() {
    struct Data hoje;

    hoje.dia = 11;
    hoje.mes = 9;
    hoje.ano = 2024;

    printf("Data armazenada: %02d/%02d/%d\n", hoje.dia, hoje.mes, hoje.ano);

    return 0;
}
