//Faça um programa onde o usuário informa qual tabuada ele deseja visualizar e o programa deve exibir a tabuada do número informado pelo usuário.
#include <stdio.h>

int main(){
    int num, pas;

    printf("Digite a tabuada que deseja ver: ");
    scanf("%d", &num);

    printf("Essa e a tabuada do %d: \n", num);

    for (pas = 0; pas <= 10; ++pas){
        printf("%d x %d = %d\n", num, pas, num * pas);
    }
    return 0;
}
