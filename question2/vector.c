/*Faça um programa que leia 10 números inteiros, armazene-os em um vetor, solicite
um valor de referência inteiro e:
a) imprima os números do vetor que são maiores que o valor referência;
b) retorne quantos números armazenados no vetor são menores que o valor de
referência;
c) retorne quantas vezes o valor de referência aparece no vetor.*/

#include <stdio.h>

int main() {
    int vetor[10], ref, cont = 0;    

    printf("Escreva um valor referencia: ");
    scanf(" %d", &ref);

    for(int i = 0; i < 10; i++) {
        printf("Escreva um numero: ");
        scanf(" %d", &vetor[i]);
    }

    printf("Numeros maiores que o valor de referencia: ");

    for(int i = 0; i < 10; i++) {
        if(vetor[i] > ref) {
            printf(" %d", vetor[i]);
        } 
    }

    printf("\nNumeros menores que o valor de referencia: ");

    for(int i = 0; i < 10; i++) {
        if(vetor[i] < ref){
            printf(" %d", vetor[i]);
        }
    }

    for(int i = 0; i < 10; i++) {
        if(vetor[i] == ref) {
            cont++;
        }
    }

    printf("\nApareceram %d numeros no vetor igual ao numero de referencia", cont);
    
    return 0;
}
