/* O sistema de avalia��o de determinada disciplina, � composto por tr�s provas Nota (0 a 10).
A primeira prova tem peso 2, a Segunda tem peso 3 e a terceira prova tem peso 5. Fa�a um algoritmo
para calcular a m�dia final de um aluno desta disciplina e se a media for maior ou igual a 6,
 mostrar APROVADO, sen�o, mostrar REPROVADO.
*/
#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media;

    printf("Digite a nota da primeira prova (0 a 10): ");
    scanf("%f", &nota1);

    printf("Digite a nota da segunda prova (0 a 10): ");
    scanf("%f", &nota2);

    printf("Digite a nota da terceira prova (0 a 10): ");
    scanf("%f", &nota3);

    media = ((nota1 * 2) + (nota2 * 3) + (nota3 * 5)) / 10;

    printf("M�dia final: %.2f\n", media);

    if (media >= 6.0) {
        printf("APROVADO\n");
    }
    else {
        printf("REPROVADO\n");
    }
    return 0;
}
