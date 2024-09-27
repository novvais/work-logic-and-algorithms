/*Desenvolva um algoritmo que leia todos os elementos de uma matriz 3x3. A
restrição é que se os números digitados forem pares devem ser armazenados
somente em linhas pares e os ímpares, somente em linhas ímpares. Quando não
houver mais espaço para armazenar um número par ou ímpar, seu programa deve
dar uma mensagem e continuar a ler os próximos números.*/

#include <stdio.h>

int main() {
    int matriz[3][3] = {{0}};
    int numero[9];
    int posicaoParLinha0 = 0, posicaoParLinha2 = 0; 
    int posicaoImparLinha1 = 0;

    for(int i = 0; i < 9; i++) {
        printf("Digite o %d numero da matriz: ", i + 1);
        scanf(" %d", &numero[i]);

        if(numero[i] % 2 == 0) {
            if(posicaoParLinha0 < 3) {
                matriz[0][posicaoParLinha0] = numero[i];

                posicaoParLinha0++;
            } else if(posicaoParLinha2 < 3) {
                matriz[2][posicaoParLinha2] = numero[i];

                posicaoParLinha2++;
            } else {
                printf("A linha 0 e 2 estao cheias, nao e possivel adicionar outro numero par!\n");
            }
    
        } else {
            if (posicaoImparLinha1 < 3){
                matriz[1][posicaoImparLinha1] = numero[i];

                posicaoImparLinha1++;
            } else {
                printf("A linha 1 esta cheia, nao e possivel adicionar outro numero impar!\n");
            }
        }
    }

    printf("Matriz completa: \n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf(" %d", matriz[i][j]);
        }
        printf("\n");
    }
    
}
