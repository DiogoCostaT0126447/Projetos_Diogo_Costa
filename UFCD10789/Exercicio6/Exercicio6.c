/*: Uma loja oferece para os seus clientes, um determinado desconto de acordo com o valor da compra efetuada.
 O desconto é de 10%, se o valor da compra for até 200.00€, 15% se for maior que  200€ e menor ou igual a  500,00E e
  20% se for acima de 500,00€. Crie um algoritmo que leia o nome do cliente e o valor da compra. Mostre ao final
  o nome do cliente, o valor da compra, o percentual de desconto e o seu valor e valor total a pagar deste cliente.
  (só fazer duas Contas)
*/
#include <stdio.h>

int main() {
    char nome[100];
    float Compra, desconto, Total;


    printf("Digite o nome do cliente: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Digite o valor da compra (em euros): ");
    scanf("%f", &Compra);

    if (Compra <= 200.00) {
        desconto = Compra * 0.10;
    } else if (Compra > 200.00 && Compra <= 500.00) {
        desconto = Compra * 0.15;
    } else {
        desconto = Compra * 0.20;
    }

    Total = Compra - desconto;

    printf("\nNome do cliente: %s", nome);
    printf("Valor da compra: %.2f €\n", Compra);
    printf("Percentual de desconto: %.2f%%\n", (desconto / Compra) * 100);
    printf("Valor do desconto: %.2f €\n", desconto);
    printf("Valor total a pagar: %.2f €\n",Total);

    return 0;
}
