/*Dadas duas matrizes numéricas A e B de dimensão 3×2, fazer um algoritmo que
gere uma matriz lógica C, tal que o elemento C[i][j] seja verdadeiro se os
elementos nas posições respectivas das matrizes A e B forem iguais, e falso caso
contrário. Exibir as matrizes A, B e C.*/ 

#include <stdio.h>

int main() {
    int matrizA[3][2], matrizB[3][2], matrizC[3][2];

    matrizA[0][0] = 5;  matrizA[0][1] = 3;
    matrizA[1][0] = 2;  matrizA[1][1] = 2;
    matrizA[2][0] = 7;  matrizA[2][1] = 7;

    matrizB[0][0] = 1;  matrizB[0][1] = 3;
    matrizB[1][0] = 2;  matrizB[1][1] = 6;
    matrizB[2][0] = 4;  matrizB[2][1] = 7;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            if (matrizA[i][j] == matrizB[i][j]) {
                matrizC[i][j] = 1;
            } else {
                matrizC[i][j] = 0;
            }
        } 
    }

    printf("Matriz A: \n");

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            printf(" %d", matrizA[i][j]);
        } 

        printf(" \n");
    }

    printf("Matriz B: \n");

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            printf(" %d",matrizB[i][j]);
        } 

        printf(" \n");
    }

    printf("Matriz C: \n");

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            printf(" %d", matrizC[i][j]);
        } 

        printf(" \n");
    }

    return 0;
}
