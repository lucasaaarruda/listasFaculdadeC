//Qual pacote é mais leve? Faça um programa que receba o peso de quantos pacotes o usuário quiser e quando não tiver mais pacotes para informar o peso, 
//o programa deverá exibir apenas o peso do pacote mais pesado.
#include <stdio.h>

int main(){
    float peso, peso_maior = 0.0;
    int pac, pac_usu;

    printf("Quantos pacotes voce quer pesar? ");
    scanf("%d", &pac_usu);
    
    for (pac = 1; pac <= pac_usu; ++pac){
        printf("Digite o peso do pacote %d: ", pac);
        scanf("%f", &peso);

        if (peso > peso_maior){
            peso_maior = peso;
        }
    }
    printf("O peso do pacote mais pesado e: %.2f\n", peso_maior);

    return 0;
}
