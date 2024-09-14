//Faça um programa que exibe as tabuadas do 0 ao 10.
#include <stdio.h>

int main(){
    int num, pas;

    for (num = 0; num <= 10; ++num){
        printf("Essa e a tabuada do %d:\n", num);
        for(pas = 0; pas <=10; ++pas){
            printf("%d x %d = %d\n", num, pas, num * pas);
        }
        printf("\n");
    }
    return 0;
}
