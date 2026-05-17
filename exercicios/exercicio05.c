// Peça a idade do usuário
// Mostre: 
// "Maior de idade"
// "Menor de idade"

#include <stdio.h>

int main() {
    int idade;
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if(idade >= 18) {
        printf("Você é maior de idade.");
        return 0;
    } else {
        printf("Você é menor de idade.");
        return 0;
    }
}