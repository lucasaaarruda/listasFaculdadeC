// Faça um programa que receba a idade, o nome e a idade de três pessoas, em seguida exiba a idade e o nome em ordem crescente (pela idade).
#include <stdio.h>
#include <string.h>

int main(){
    int idade[10], iaux, size = 10, x, y;
    char nome[10][81], naux[81];

    for(x=0; x<size; x++){
        printf("\nEntre com o nome: ");
        scanf("%80s", nome[x]);
        printf("\nEntre com a idade do %s: ", nome[x]);
        scanf("%d", &idade[x]);
    }
    for(x=0; x<size; x++){
        for(y=x; y<size; y++){
            if(idade[x] > idade[y]){
                iaux = idade[x];
                idade[x] = idade[y];
                idade[y] = iaux;

                strcpy(naux, nome[x]);
                strcpy(nome[x], nome[y]);
                strcpy(nome[y], naux);
            }
        }
    }
    printf("\nIdade\tNome");
    for(x=0; x<size; x++){
        printf("\n%d\t%s", idade[x], nome[x]);
    }
    return 0;
}