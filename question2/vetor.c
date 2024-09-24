/*Faça um programa que leia 10 números inteiros, armazene-os em um vetor, solicite
um valor de referência inteiro e:
a) imprima os números do vetor que são maiores que o valor referência;
b) retorne quantos números armazenados no vetor são menores que o valor de
referência;
c) retorne quantas vezes o valor de referência aparece no vetor.*/

#include <stdio.h>

int main() {
    int vetor[3], ref, cont;    

    printf("Escreva um valor referencia: ");
    scanf(" %d", &ref);

    for(int i = 0; i < 3; i++) {
        printf("Escreva um numero: ");
        scanf(" %d", &vetor[i]);
    }

    printf("Numeros maiores que o valor de referencia: ");

    for(int i = 0; i < 3; i++) {
        if(vetor[i] > ref) {
            printf("Tem %d numeros maiores que o valor de referencia \n", vetor[i]);
        } 
    }

    printf("Numeros menores que o valor de referencia: ");

    for(int i = 0; i < 3; i++) {
        if(vetor[i] < ref){
            printf(" %d", vetor[i]);
        }
    }

    for(int i = 0; i < 3; i++) {
        if(vetor[i] == ref) {
            cont++;
        }
    }

    printf("\n Apareceram %d numeros no vetor igual ao numero de referencia", cont);
    
    return 0;
}
