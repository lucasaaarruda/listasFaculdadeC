//Faça um programa para controlar peso máximo da carga de um caminhão. No início do programa o usuário deverá informar o peso máximo suportado pelo caminhão,
//em seguida o peso de cada volume a ser carregado, caso a soma do peso dos pacotes ultrapassar o peso máximo suportado o programa deve informar ao usuário que o limite foi alcançado
//e que o último pacote deve ser retirado.
#include <stdio.h>

int main() {
    float peso_maximo, peso_vol, peso_atual = 0.0;
    char add_mais;

    printf("Informe o peso maximo suportado pelo caminhao (KG): ");
    scanf("%f", &peso_maximo);

    do {
        printf("Digite o peso do volume a ser carregado (KG): ");
        scanf("%f", &peso_vol);

        if (peso_atual + peso_vol > peso_maximo) {
            printf("Limite de carga excedido! O ultimo volume (%.2f KG) deve ser retirado.\n", peso_vol);
            break;
        } else {
            peso_atual += peso_vol;
            printf("Peso atual da carga: %.2f kg\n", peso_atual);
        }
        printf("Deseja adicionar mais volumes? (S/N): ");
        scanf(" %c", &add_mais);

    } while (add_mais == 's' || add_mais == 'S');

    printf("Carga finalizada. Peso total da carga: %.2f KG\n", peso_atual);

    return 0;
}
