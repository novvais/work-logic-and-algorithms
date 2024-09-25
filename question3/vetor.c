#include <stdio.h>

int max;

int main() {
    int vetor[max], num;

    printf("Quantos numeros voce deseja escrever? ");
    scanf(" %d", &max);

    for(int i = 0; i < max; i++) {
        printf("Digite um numero: ");
        scanf(" %d", &vetor[i]);

        if(vetor[i] % 2 == 0) {
            
        } 
    }

    for (int i = 0; i < max; i++){
        printf(" %d", vetor[i]);
    }
    
    return 0;
}
