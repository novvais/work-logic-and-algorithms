/*Elabore um programa que solicite o número de alunos total em uma turma,
construa a matriz com as informações dos usuários e solicite três notas para cada
aluno. Ao final, o algoritmo realizará a média das notas e mostrará o resultado de
acordo com a opção escolhida pelo usuário. O programa deverá tratar as
informações das notas que não poderão ser menores que 0 e maiores que 10.
Também deverá ser entregue um menu de opções, guiando o usuário nos
procedimentos disponíveis:
a) Cálculo da média de cada aluno;
b) Cálculo da média da sala;
c) Aluno com a menor média;
d) Aluno com o melhore desempenho (maior média)*/

#include <stdio.h>

int main() {
    int qtdAlunos, qtdNotas = 3;

    printf("Digite a quantidade de alunos: ");
    scanf(" %d", &qtdAlunos);

    float notas[qtdAlunos][qtdNotas], media[qtdAlunos];
    float mediaTotal = 0, menorM, maiorM;
    int melhorAluno = 0, piorAluno = 0;
    int opcao;

    for (int i = 0; i < qtdAlunos; i++) {
        float notasTotal = 0;

        for (int j = 0; j < qtdNotas; j++) {
            do {
                printf("\nDigite a %d nota do %d aluno: ", j + 1, i + 1);
                scanf(" %f", &notas[i][j]);

                if(notas[i][j] < 0 || notas[i][j] > 10) {
                    printf("Nota invalida! Por favor, digite uma entre 0 e 10.\n");
                }
            } while (notas[i][j] < 0 || notas[i][j] > 10);

            notasTotal += notas[i][j];
        }

        media[i] = notasTotal / qtdNotas;

        mediaTotal += media[i];

        if(i == 0) {
            maiorM = media[i];
            menorM = media[i];
        }

        if (media[i] > maiorM) {
            maiorM = media[i];
            melhorAluno = i;
        }

        if (media[i] < menorM) {
            menorM = media[i];
            piorAluno = i;
        }
        
    }

    do {
       printf("\nComo deseja ver as mesdias?\n");
        printf("1 - Calculo da media de cada aluno\n");
        printf("2 - Calculo da media da sala\n");
        printf("3 - Aluno com a menor media\n");
        printf("4 - Aluno com o melhore desempenho (maior media)\n");
        printf("5 - Sair\n");

        printf("Digite sua opcao: ");
        scanf(" %d", &opcao);

        switch (opcao) {
            case 1:
                printf("\nMedia de todos os alunos: \n");

                for (int i = 0; i < qtdAlunos; i++) {
                    printf("Media do Aluno %d: %.2f\n", i + 1, media[i]);
                }

                break;
            case 2:
                printf("\nMedia da sala: %.2f\n", mediaTotal / qtdAlunos);

                break;

            case 3:
                printf("\nAluno com a menor media: Aluno %d, Media: %.2f\n", piorAluno + 1, menorM);

                break;
            case 4:
                printf("\nAluno com o melhor desempenho: Aluno %d, Media: %.2f\n", melhorAluno + 1, maiorM);

                break;
            case 5:
                printf("\nSaindo...\n");

                break;
            default:
                printf("\nOpcao invalida!");

                break;
        }
    } while (opcao != 5);

    return 0;
}
