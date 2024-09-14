//Programa passado pelo professor como exemplo.
#include <stdio.h>

void main(){
    int numero[5];
    
    numero[0] = 20;
    numero[1] = 22;
    numero[2] = 25;
    numero[3] = 26;
    numero[4] = 30;

    int x;
    for(x = 0; x < 5; x++){
        printf("Numeros: %d\n", numero[x]);
    }
}