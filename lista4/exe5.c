//Qual pacote é mais pesado? Faça um programa que receba o peso de dez pacotes e em seguida exiba apenas o peso do pacote mais pesado.
#include <stdio.h>

int main(){
    float peso, peso_maior = 0.0;
    int pac;
    
    for (pac = 1; pac <= 10; ++pac){
        printf("Digite o peso do pacote %d: ", pac);
        scanf("%f", &peso);

        if (peso > peso_maior){
            peso_maior = peso;
        }
    }
    printf("O peso do pacote mais pesado e: %.2f\n", peso_maior);

    return 0;
}
