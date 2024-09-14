//Qual pacote é mais pesado? Faça um programa que receba o peso de dois pacotes e em seguida exiba apenas o peso do pacote mais pesado.
#include <stdio.h>

int main(){
    float pac_1, pac_2;
    
    printf("Digite o peso do primeiro pacote: ");
    scanf("%f", &pac_1);

    printf("Digite o peso do segundo pacote: ");
    scanf("%f", &pac_2);

    if (pac_1 > pac_2){
        printf("O primeiro pacote e o mais pesado: %.2f", pac_1);
    } else if (pac_2 > pac_1){
        printf("O segundo pacote e o mais pesado: %.2f", pac_2);
    } else {
        printf("Os pacotes tem o mesmo peso %.2f e %.2f", pac_1, pac_2);
    }
    return 0;
}
