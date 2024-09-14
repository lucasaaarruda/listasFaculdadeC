//Faça um programa que receba uma string e exiba ela ao contrário.
#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    int i, tamanho;

    printf("Digite uma frase: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    tamanho = strlen(str);

    printf("Frase ao contrario: ");
    for (i = tamanho - 1; i >= 0; i--){
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}