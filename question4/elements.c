/*Desenvolva um algoritmo que preencha aleatoriamente um vetor de 10000
elementos inteiros no intervalo de 0 a 99. Em seguida, escreva o número de
ocorrências de cada um dos possíveis casos. Faça uma breve reflexão sobre as
características do gerador de números aleatórios usado. Exemplo da saída:
0 ocorreu 101 vezes
1 ocorreu 100 vezes
2 ocorreu 99 vezes
3 ocorreu 102 vezes
...
99 ocorreu 104 vezes */

#include <stdio.h>
#include <stdlib.h>

int tamanho = 1000;
int intervalo = 100;

int main() {
    int vetor[tamanho], contador[intervalo];
    
    for (int i = 0; i < intervalo; i++) {
        contador[i] = 0;
    }
    

    for (int i = 0; i < tamanho; i++) {
        vetor[i] = rand() % intervalo;

        contador[vetor[i]]++;
    }

    for (int i = 0; i < intervalo; i++) {
        printf("Numero %d: teve %d ocorrencias.\n", i, contador[i]);
    }
    
    return 0;
}
