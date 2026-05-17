// Peça o usuário e diga se ele é:
// Par
// Impar

#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número impar ou par: ");
    scanf("%d", &numero);

    if(numero % 2 == 0) {
        printf("É par");
        return 0;
    } else {
        printf("É impar");
        return 0;
    }
}