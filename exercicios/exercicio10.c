// Peça ao usuário um número.
// Some todos os números de 1 até esse valor e mostre o resultado;

// Exemplo:
// Se digitar 5 => resultado = 15

#include <stdio.h>

int main() {
    
    int numeroSelecionado;
    int soma = 0;

    printf("Digite um número: ");
    scanf("%d", &numeroSelecionado);

    for (int i = 1; i <= numeroSelecionado; i++)
    {
        soma = soma + i;
    }
    
    printf("%d\n", soma);
    return 0;

}
