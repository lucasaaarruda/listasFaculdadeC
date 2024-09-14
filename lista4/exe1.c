//Faça um programa que exibe a tabuada do dois.
#include <stdio.h>

int main(){
    int num = 2, pas;

    printf("Essa e a tabuada do %d: \n", num);

    for (pas = 0; pas <= 10; ++pas){
        printf("%d x %d = %d\n", num, pas, num * pas);
    }
    return 0;
}
