//O  índice de Massa Corporal (IMC) é utilizado para medir a obesidade. O cálculo do IMC é feito dividindo o peso (em quilogramas) pela altura (em metros) ao quadrado.
//Na tabela 1 pode ser visto a situação de uma pessoa de acordo com o IMC calculado.
//Faça um programa que receba os dados do usuário (altura e peso), calcule o IMC e exiba sua situação.
#include <stdio.h>

int main() {
    double altura, peso, imc;

    printf("Digite sua altura em metros: ");
    scanf("%lf", &altura);

    printf("Digite seu peso em quilogramas: ");
    scanf("%lf", &peso);

    imc = peso / (altura * altura);

    printf("Seu IMC é %.2lf\n", imc);

    if (imc < 18.5) {
        printf("Situação: Abaixo do peso\n");
    } else if (imc >= 18.5 && imc < 24.9) {
        printf("Situação: Peso normal\n");
    } else if (imc >= 25.0 && imc < 29.9) {
        printf("Situação: Sobrepeso\n");
    } else {
        printf("Situação: Obesidade\n");
    }
    return 0;
}
