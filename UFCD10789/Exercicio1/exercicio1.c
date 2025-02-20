#include <stdio.h>

// Desenvolva um programa que assuma uma entrada em Segundos e transforme em Horas, Minutos e Segundos.

int main() {
    int segundos;

    printf("Insira o tempo em segundos: ");
    scanf("%d", &segundos);

    int horas = segundos / 3600;
    segundos %= 3600;
    int minutos = segundos / 60;
    segundos %= 60;

    printf("O numero inserido equivale a %d Horas, %d Minutos e %d Segundos.\n", horas, minutos, segundos);

    return 0;
}

