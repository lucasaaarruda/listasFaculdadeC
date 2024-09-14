//Quiz do conhecimento, faça um programa que exiba 3 perguntas, todas com no mínimo 4 alternativas. O usuário deverá responder as questões, indicando a alternativa que ele acredita ser a correta.
//Após responder as 3 questões, o usuário deve ser informado a quantidade de questões respondida corretamente.
#include <stdio.h>

int main() {
    int resp, certas = 0;

    printf("Pergunta 1: Qual é a capital da França?\n");
    printf("1. Berlim\n");
    printf("2. Madri\n");
    printf("3. Paris\n");
    printf("4. Roma\n");
    printf("Digite o número da alternativa correta: ");
    scanf("%d", &resp);

    if (resp == 3) {
        certas++;
    }
    printf("\nPergunta 2: Qual é o maior planeta do Sistema Solar?\n");
    printf("1. Terra\n");
    printf("2. Júpiter\n");
    printf("3. Saturno\n");
    printf("4. Marte\n");
    printf("Digite o número da alternativa correta: ");
    scanf("%d", &resp);

    if (resp == 2) {
        certas++;
    }
    printf("\nPergunta 3: Quantos continentes existem no mundo?\n");
    printf("1. Cinco\n");
    printf("2. Seis\n");
    printf("3. Sete\n");
    printf("4. Oito\n");
    printf("Digite o número da alternativa correta: ");
    scanf("%d", &resp);

    if (resp == 3) {
        certas++;
    }
    printf("\nVocê respondeu corretamente %d de 3 perguntas.\n", certas);
    if (certas == 3){
        printf("Parabéns, você acertou todas!");
    } else if (certas == 2){
        printf("Foi por pouco.");
    } else {
        printf("Precisa estudar mais...");
    }
    return 0;
}
