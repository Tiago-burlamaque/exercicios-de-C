// Peça ao usuário 5 números (um por vez).
// Mostre qual foi o maior número digitado.

#include <stdio.h>

int main() {

    int numero;
    int maior;

    for(int i = 1; i <= 5; i++) {

        printf("Digite um numero: ");
        scanf("%d", &numero);

        if(i == 1) {
            maior = numero;
        }

        if(numero > maior) {
            maior = numero;
        }

    }

    printf("Maior numero: %d\n", maior);

    return 0;
}

// #include <stdio.h>

// int main()
// {
//     int n1;
//     int n2;
//     int n3;
//     int n4;
//     int n5;

//     printf("Digite o valor do primeiro número: ");
//     scanf("%d", &n1);

//     printf("Digite o valor do segundo número: ");
//     scanf("%d", &n2);

//     printf("Digite o valor do terceiro número: ");
//     scanf("%d", &n3);

//     printf("Digite o valor do quarto número: ");
//     scanf("%d", &n4);

//     printf("Digite o valor do quinto número: ");
//     scanf("%d", &n5);

//     if (n1 > n2 && n1 > n3 && n1 > n4 && n1 > n5)
//     {
//         printf("o maior número é: %d", n1);
//         return 0;
//     }
//     else if (n2 > n1 && n2 > n3 && n2 > n4 && n2 > n5)
//     {
//         printf("O maior número é: %d", n2);
//         return 0;
//     }
//     else if (n3 > n1 && n3 > n2 && n3 > n4 && n3 > n5)
//     {
//         printf("O maior número é: %d", n3);
//         return 0;
//     }
//     else if (n4 > n1 && n4 > n2 && n4 > n3 && n4 > n5)
//     {
//         printf("O maior número é: %d", n4);
//         return 0;
//     }
//     else if (n5 > n1 && n5 > n2 && n5 > n3 && n5 > n4)
//     {
//         printf("O maior número é: %d", n5);
//         return 0;
//     }
// }