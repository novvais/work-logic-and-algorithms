#include <stdio.h>

void parCrescente(int pares[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (pares[j] > pares[j + 1]) {
                int numTemp = pares[j];
                pares[j] = pares[j + 1];
                pares[j + 1] = numTemp;
            }
        }
    }
}

void imparDecrescente(int impares[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (impares[j] < impares[j + 1]) {
                int numTemp = impares[j];
                impares[j] = impares[j + 1];
                impares[j + 1] = numTemp;
            }
        }
    }
}

int main() {
    int max;

    printf("Quantos numeros voce deseja escrever? ");
    scanf(" %d", &max);

    int vetor[max], vetorPar[max], vetorImpar[max];
    int contPar = 0, contImpar = 0;

    for(int i = 0; i < max; i++) {
        printf("Digite um numero: ");
        scanf(" %d", &vetor[i]);

        if (vetor[i] % 2 == 0) {
            vetorPar[contPar] = vetor[i];

            contPar++;
        } else {
            vetorImpar[contImpar] = vetor[i];

            contImpar++;
        }
    }

    parCrescente(vetorPar, contPar);

    imparDecrescente(vetorImpar, contImpar);

    printf("Numeros pares em ordem crescente: ");

    for (int i = 0; i < contPar; i++){
        printf(" %d", vetorPar[i]);
    }

    printf("\nNumeros impares em ordem decrescente: ");

    for (int i = 0; i < contImpar; i++){
        printf(" %d", vetorImpar[i]);
    }
    
    return 0;
}
