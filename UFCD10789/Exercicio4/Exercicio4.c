#include <stdio.h>

//Fazer um algoritmo que leia o saldo inicial de cliente do banco e leia tamb�m um cheque que entrou e ANALISE se o
//cheque poder� ser descontado ou n�o, j� que este cliente n�o possui limite.
//Se o cheque n�o poder� ser descontado, mostre essa informa��o, caso contr�rio, desconte o cheque e informe o saldo.

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
