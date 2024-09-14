//No seu exercício do item 1.d, sua solução possivelmente permite ao usuário informar qualquer número inteiro. Mas se ele informar um número negativo (exemplo -2)
//O ideal seria informar ao usuário que não é permitido ele digitar um número negativo e solicitar novamente o número. Isso deve ser feito até que ele informe um número positivo maior que zero.
//Modifique seu programa para o mesmo não permitir o usuário informar um número menor que zero para a quantidade de números.
#include <stdio.h>

#define tam_max 1000

int main(){

    int tam;
    int numero[tam_max];
    int i;

    do {
        printf("Digite a quantidade de valores que deseja armazenar (maximo %d): ", tam_max);
        scanf("%d", &tam);

        if (tam > tam_max || tam <= 0){
            printf("Quantidade invalida! O valor deve ser entre 1 e %d.\n", tam_max);
        }
    } while (tam > tam_max || tam <= 0);
    
    for (i = 0; i < tam; i++){
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &numero[i]);
    }
    printf("\n");
    for (i = 0; i < tam; i++){
        printf("%d numero: %d\n", i + 1, numero[i]);
    }
    return 0;
}