// Peça o usuário para digitar 3 números.
// Calcule e mostre a média.
// Depois informe:
// "Aprovado" se média >= 7
// "Reprovado" caso contrário

#include <stdio.h>

int main() {
    int n1;
    int n2;
    int n3;

    printf("Digite o valor do primeiro número: ");
    scanf("%d", &n1);

    printf("Digite o valor do segundo número: ");
    scanf("%d", &n2);

    printf("Digite o valor do terceiro número: ");
    scanf("%d", &n3);

    int total = n1 + n2 + n3 / 3;

    if(total >= 7) {
        printf("Aprovado");
        return 0;
    } else {
        printf("Reprovado");
        return 0;
    }
        
}