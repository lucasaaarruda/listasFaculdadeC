//Modifique código fazendo que a matriz receba apenas números negativos.	
#include <stdio.h>

void main(){
    int numeros[3][3];
    int op;
    int x, y;
    
    for(x = 0; x < 3; x++)
        for(y = 0; y < 3; y++)
            numeros[x][y] = 0;
    
    do{
        printf("\n*** Menu ***");
        printf("\n0 - Sair");
        printf("\n1 - Adicionar numero");
        printf("\n2 - Exibir numeros");
        printf("\nEntre com a opcao desejada: ");
        scanf("%d", &op);

        switch(op){
            case 0:
                printf("\nBye...\n"); break;
            case 1:
                printf("\n*** Adicionar numeros ***\n");
                
                do {
                    printf("\nEntre com o linha: ");
                    scanf("%d", &y);
                    if ((y < 0) || (y >= 3))
                        printf("\nNumero invalido");
                } while ((y < 0) || (y >= 3));

                do {
                    printf("\nEntre com a coluna: ");
                    scanf("%d", &x);
                    if ((x < 0) || (x >= 3))
                        printf("\nNumero invalido");
                } while ((x < 0) || (x >= 3));

                do {
                    printf("\nEntre com um numero negativo: ");
                    scanf("%d", &numeros[y][x]);
                    if (numeros[y][x] >= 0)
                        printf("\nNumero invalido, deve ser negativo!");
                } while (numeros[y][x] >= 0);

                break;
            case 2:
                printf("\n*** Numeros ***\n");
                for(x = 0; x < 3; x++){
                    for(y = 0; y < 3; y++){
                        printf("\t%d", numeros[x][y]);
                    }
                    printf("\n");
                }
                break;                 
        }

    } while(op != 0);
}
