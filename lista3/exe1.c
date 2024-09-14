//Receba um número e informa se o mesmo é par
#include <stdio.h>

int main() {
    int numero;

	printf("Digite um numero: ");
	scanf("%d" , &numero);

    if (numero % 2== 0) {
		printf("%d é par.\n", numero);

	}else {
		printf("%d não é par.\n" , numero);
	}

	return 0;
}
