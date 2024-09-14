//Reescreva o programa, permitindo ao usuário informar os valores a ser armazenado no vetor.
#include <stdio.h>

int main(){
    int tam = 5;
    int numero[tam];
    int i;

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