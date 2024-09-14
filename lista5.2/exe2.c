//Existem palavras que são palíndromos, estas palavras se você as ler de trás para frente continua a mesma palavra.
//Exemplo: rir, ara, arara, asa, ata, aviva, ele, esse, kaiak, oco, osso, ovo. Faça um programa que recebe uma palavra e informa se ela é ou não um palíndromo.
#include <stdio.h>
#include <string.h>

int main() {
    char palavra[100];
    int i, tamanho;
    int palindromo = 1;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    tamanho = strlen(palavra);

    for (i = 0; i < tamanho / 2; i++) {
        if (palavra[i] != palavra[tamanho - i - 1]) {
            palindromo = 0;
            break;
        }
    }
    if (palindromo) {
        printf("A palavra '%s' e um palindromo.\n", palavra);
    } else {
        printf("A palavra '%s' nao e um palindromo.\n", palavra);
    }
    return 0;
}
