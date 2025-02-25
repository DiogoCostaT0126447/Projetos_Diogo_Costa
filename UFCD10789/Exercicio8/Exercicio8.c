/*Crie um programa que leia a nota de 10 alunos, calcule a m�dia e mostre essa m�dia e mostre
tamb�m quantos alunos ficaram com a sua nota igual ou acima da m�dia. (NOTAS de 0 a20). */

#include <stdio.h>

int main() {
    float notas[10], media = 0;
    int i, aprovados = 0;

    for (i = 0; i < 10; i++) {
        printf("Digite a nota do aluno %d (0 a 20): ", i + 1);
        scanf("%f", &notas[i]);

        if (notas[i] < 0 || notas[i] > 20) {
            printf("\nNota inserida inv�lida! Insira uma nota entre 0 e 20.\n");
            i--;
        } else {
            media += notas[i];
        }
    }

    media /= 10;

    printf("M�dia das notas: %.2f\n", media);

    for (i = 0; i < 10; i++) {
        if (notas[i] >= media) {
            aprovados++;
        }
    }

    printf("Quantidade de alunos com nota igual ou acima da m�dia: %d\n", aprovados);

    return 0;
}

