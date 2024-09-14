//Reescreva o programa, permitindo ao usuário informar a quantidade de valores que ele deseja armazenar e posteriormente exibir.
#include <stdio.h>

#define tam_max 1000

int main(){
    int tam;
    int numero[tam_max];
    int i;

    printf("Digite a quantidade de valores que deseja armazenar (maximo %d): ", tam_max);
    scanf("%d", &tam);

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