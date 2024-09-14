// Sabendo que a senha é “secreta” faça uma programa que receba uma senha do usuário e informe se o acesso é permitido, para o caso do usuário informar 
// secreto ou acesso negado caso o usuário informe qualquer coisa diferente desecreto.
#include <stdio.h>
#include <string.h>

void main(){
    char senha[201], chave[201];
    int iguais = 1, x = 0;

    strcpy(chave, "secreto");
    printf("Entre com a senha: ");
    fgets(senha, sizeof(senha), stdin);
    
    for (x = 0; x < strlen(chave); x++){
        if (senha[x] != chave [x]){
            iguais = 0;
        }
    }
    if (iguais){
        printf("Acesso permitido\n");
    } else {
        printf("Acesso negado\n");
    }
}