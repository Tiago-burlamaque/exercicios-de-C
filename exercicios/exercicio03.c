// Criar uma variavel com um número qualquer mostre na tela:
// "Maior que 10" se for maior
// "Menor igual a 10" caso o contrário

#include <stdio.h>

int main() {
    int n = 20;

    if(n > 10) {
        printf("Maior que 10");
        
    } else if(n <= 10) {
        printf("Menor igual a 10");
    }
}