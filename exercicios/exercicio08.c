// Mostre a soma dos números de 1 até 5.

#include <stdio.h>

int main() {

    int soma = 0;

    for(int i = 1; i <= 5; i++) {
        soma = soma + i;
    }

    printf("Resultado da soma: %d\n", soma);

    return 0;
}