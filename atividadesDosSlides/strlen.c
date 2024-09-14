//Utilização da função strlen()
#include <stdio.h>
#include <string.h>

int main(){
    char nome[81];
    int qtd_caracteres;

    printf("\nEntre com o seu nome: ");
    scanf("%81s", &nome);
    qtd_caracteres = strlen(nome);
    printf("Ola %s seu nome tem %d caracteres.", nome, qtd_caracteres);

    return 0;
}