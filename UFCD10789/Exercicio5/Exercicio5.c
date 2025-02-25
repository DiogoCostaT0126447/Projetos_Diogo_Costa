#include <stdio.h>


/*Ler 3 valores INTEIROS para as variáveis Num1, Num2, Num3.
Apresentar os valores dispostos em ordem crescente e decrescente.*/

int main() {
    int num1, num2, num3;


    printf("Digite o nmr1, nmr2, nmr3: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("Ordem crescente\n");
    if (num1 > num2) {
        if (num2 > num3) {
            printf("%d %d %d", num3, num2, num1);
        } else {
            if (num1 > num3) {
                printf("%d %d %d", num2, num3, num1);
            } else {
                printf("%d %d %d", num2, num1, num3);
            }
        }
    } else {
        if (num2 > num3) {
            if (num1 > num3) {
                printf("%d %d %d", num3, num1, num2);
            }
            else {
                printf("%d %d %d", num1, num3, num2);
            }
        }
        else {
            printf("%d %d %d", num1, num2, num3);
        }
    }

    printf("\n");

    printf("Ordem decrescente\n");
     if (num1 > num2) {
        if (num2 > num3) {
            printf("%d %d %d", num1, num2, num3);
        }
        else {
            if (num1 > num3) {
                printf("%d %d %d", num1, num3, num2);
            }
            else {
                printf("%d %d %d", num3, num1, num2);
            }
        }
    }
    else {
        if (num2 > num3) {
            if (num1 > num3) {
                printf("%d %d %d", num2, num1, num3);
            }
            else {
                printf("%d %d %d", num2, num3, num1);
            }
        }
        else {
            printf("%d %d %d", num3, num2, num1);
        }
    }

    return 0;
}
