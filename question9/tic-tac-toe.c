/*Desenvolva um algoritmo para jogar o jogo da velha. O programa deve controlar o
andamento do jogo com uma matriz 3x3. A cada lance o jogador deve informar
qual a posição do tabuleiro que deve ser preenchida. Se houver um ganhador, seu
programa deve interromper o jogo e avisar que o jogo terminou. A cada lance o seu
programa deve mostrar o tabuleiro no formato abaixo: */

#include <stdio.h>

int tamanho 3;

void exibirTabuleiro(char tabuleiro[tamanho][tamanho]) {
    printf("\n");
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            printf(" %c ", tabuleiro[i][j]);
            if (j < tamanho - 1) printf("|");
        }
        printf("\n");
        if (i < tamanho - 1) printf("---+---+---\n");
    }
    printf("\n");
}

int verificarGanhador(char tabuleiro[tamanho][tamanho], char jogador) {

    for (int i = 0; i < tamanho; i++) {
        if ((tabuleiro[i][0] == jogador && tabuleiro[i][1] == jogador && tabuleiro[i][2] == jogador) ||
            (tabuleiro[0][i] == jogador && tabuleiro[1][i] == jogador && tabuleiro[2][i] == jogador)) {
            return 1;
        }
    }

    if ((tabuleiro[0][0] == jogador && tabuleiro[1][1] == jogador && tabuleiro[2][2] == jogador) ||
        (tabuleiro[0][2] == jogador && tabuleiro[1][1] == jogador && tabuleiro[2][0] == jogador)) {
        return 1;
    }
    return 0;
}

int main() {
    char tabuleiro[tamanho][tamanho] = {
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'}
    };
    
    char jogadorAtual = 'X';
    int jogada, linha, coluna;
    int jogadasRestantes = tamanho * tamanho;

    exibirTabuleiro(tabuleiro);

    while (jogadasRestantes > 0) {
        printf("Jogador %c, escolha uma posição: ", jogadorAtual);
        scanf("%d", &jogada);

        linha = (jogada - 1) / tamanho;
        coluna = (jogada - 1) % tamanho;

        if (tabuleiro[linha][coluna] == 'X' || tabuleiro[linha][coluna] == 'O') {
            printf("Posição já ocupada! Tente novamente.\n");
            continue;
        }

        tabuleiro[linha][coluna] = jogadorAtual;
        exibirTabuleiro(tabuleiro);

        if (verificarGanhador(tabuleiro, jogadorAtual)) {
            printf("Jogador %c venceu!\n", jogadorAtual);
            return 0;
        }

        jogadorAtual = (jogadorAtual == 'X') ? 'O' : 'X';
        jogadasRestantes--;
    }

    printf("Empate! O jogo terminou.\n");

    return 0;
}

