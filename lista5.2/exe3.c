//Jogo da forca, faça um programa que simule o jogo da forca.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define max_tentativas 6
#define tam_max_palavras 100

int main() {
    char palavra_secreta[tam_max_palavras] = "PROGRAMACAO";
    char palavra_adivinhada[tam_max_palavras];
    int tamanho_palavra = strlen(palavra_secreta);
    int tentativas_restantes = max_tentativas;
    int letras_corretas = 0;
    int i;

    for (i = 0; i < tamanho_palavra; i++) {
        palavra_adivinhada[i] = '_';
    }
    palavra_adivinhada[tamanho_palavra] = '\0';

    while (tentativas_restantes > 0 && letras_corretas < tamanho_palavra) {
        char letra;
        int acerto = 0;

        printf("\nPalavra: %s\n", palavra_adivinhada);
        printf("Tentativas restantes: %d\n", tentativas_restantes);
        printf("Digite uma letra: ");
        scanf(" %c", &letra);
        letra = toupper(letra);

        for (i = 0; i < tamanho_palavra; i++) {
            if (palavra_secreta[i] == letra && palavra_adivinhada[i] == '_') {
                palavra_adivinhada[i] = letra;
                letras_corretas++;
                acerto = 1;
            }
        }
        if (!acerto) {
            printf("Letra incorreta!\n");
            tentativas_restantes--;
        }
        if (letras_corretas == tamanho_palavra) {
            printf("\nParabens! Voce adivinhou a palavra: %s\n", palavra_secreta);
            return 0;
        }
    }
    if (tentativas_restantes == 0) {
        printf("\nGame over! Voce nao conseguiu adivinhar a palavra: %s\n", palavra_secreta);
    }
    return 0;
}
