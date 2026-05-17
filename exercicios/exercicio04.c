// Peça para o usuário digitar um número.
// Mostre na tela se ele é positivo ou negativo.

#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    printf("O número que você colocou foi: %d\n", numero );

    return 0;
}