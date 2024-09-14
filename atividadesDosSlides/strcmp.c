//Utilização da função strcmp()
#include <stdio.h>
#include <string.h>

int main(){
    char funcionario[81], aluno[81];
    int diferenca;

    printf("\nEntre com o nome do funcionario: ");
    scanf("%80s", &funcionario);
    printf("\nEntre com o nome do aluno: ");
    scanf("%80s", &aluno);

    diferenca = strcmp(funcionario, aluno);
    if(diferenca == 0){
        printf("\nSao xaras!");
    } else {
        printf("\nNao sao xaras");
    }
    return 0;
}