#include <stdio.h>

//Fazer um algoritmo que leia o saldo inicial de cliente do banco e leia também um cheque que entrou e ANALISE se o
//cheque poderá ser descontado ou não, já que este cliente não possui limite.
//Se o cheque não poderá ser descontado, mostre essa informação, caso contrário, desconte o cheque e informe o saldo.

int main() {

    float saldo_inicial, valor_cheque, saldo_final;

    printf("Digite o saldo inicial do cliente:  ");
    scanf("%f", &saldo_inicial);

    printf("Digite o valor do cheque:  ");
    scanf("%f", &valor_cheque);

    if (valor_cheque <= saldo_inicial) {
        saldo_final = saldo_inicial - valor_cheque;
        printf("Cheque descontado com sucesso! Saldo final: %.2f\n ", saldo_final);
    } else {
        printf("Cheque nao pode ser descontado. Saldo insuficiente.\n");
    }

    return 0;
}
