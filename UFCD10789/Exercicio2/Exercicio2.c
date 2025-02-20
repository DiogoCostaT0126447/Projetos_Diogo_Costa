#include <stdio.h>

//Fazer um programa que analise 3 valores inteiros (através das variáveis num1, num2 e num3),e informa qual o maior e qual o menor deles.

int main() {
    int num1, num2, num3;

    printf("Insira o primeiro numero: ");
    scanf("%d", &num1);
    printf("Insira o segundo numero: ");
    scanf("%d", &num2);
    printf("Insira o terceiro numero: ");
    scanf("%d", &num3);


    int maior = num1;
    if (num2 > maior) {
        maior = num2;
    if (num3 > maior) {
        maior = num3;
    }

    int menor = num1;
    if (num2 < menor) {
        menor = num2;
    }
    if (num3 < menor) {
        menor = num3;
    }

    printf("O maior numero e: %d\n", maior);
    printf("O menor numero e: %d\n", menor);

    return 0;
}
}
