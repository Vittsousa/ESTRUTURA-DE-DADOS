#include <stdio.h>
    int main() {
        float numero1, numero2;
        float soma, diferenca, produto, quociente;

        printf("Digite o primeiro numero:");
        scanf("%f", &numero1);

        printf("Digite o segundo numero:");
        scanf("%f", &numero2);

        soma = numero1 + numero2;
        diferenca = numero1 - numero2;
        produto = numero1 * numero2;

    if (numero2 != 0) {
        quociente = numero1 / numero2;

        printf("Soma: %.2f\n", soma);
        printf("Diferença: %.2f\n", diferenca);
        printf("Produto: %.2f\n", produto);
        printf("Quociente: %.2f\n", quociente);
    } else {

        printf("Não é possível dividir por zero.\n");
        printf("Soma: %.2f\n", soma);
        printf("Diferença: %.2f\n", diferenca);
        printf("Produto: %.2f\n", produto);
    }

    return 0;
}