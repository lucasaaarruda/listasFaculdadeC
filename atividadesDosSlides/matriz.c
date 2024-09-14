//Utilização de Matriz
#include <stdio.h>
#include <stdbool.h>

int main(){
    int tabuleiro[10][10];
    int x, y;
    bool achou = false;

    for (x=0;x<10;x++){
        for(x=0;y<10;y++){
            tabuleiro[x][y] = 0;
        }
    }
    tabuleiro[3][5] = 1;

    do{
        int linha, coluna;
        printf("\nDescubra onde esta o navio.");
        printf("\nEntre com a linha: ");
        scanf("%d", &linha);
        printf("\nEntre com a coluna:");
        scanf("%d", &coluna);
        if(tabuleiro[linha][coluna]==1){
            printf("Achou!");
            achou = true;
        } else {
            printf("Errou!!");
        }
    } while(!achou);
    return 0;
}