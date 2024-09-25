/*Dado um número inteiro de segundos, mostrar a quantas horas, minutos e
segundos ele corresponde.*/

#include <stdio.h>

int main() {
    int seconds, minutes, hours;

    printf("Digite quantos segundos voce quer transformar em horas e minutos: ");
    scanf(" %d", &seconds);

    hours = seconds / 3600;

    minutes = (seconds % 3600) / 60;

    seconds = seconds % 60;

    return printf("%dh:%dm:%ds", hours, minutes, seconds);
}
