/*Faça um programa para verificar se uma palavra ou frase são palíndromos.*/

#include <stdio.h>
#include <string.h> 

int main() {
    char palavra[100];
    int inicio, fim, tamanho;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    tamanho = strlen(palavra);

    inicio = 0;
    fim = tamanho - 1;

    while (inicio < fim) {
        if (palavra[inicio] != palavra[fim]) {
            printf("Nao e um palindromo.\n");
            return 0;
        }
        inicio++;
        fim--;
    }

    printf("E um palindromo.\n");

    return 0;
}

