#include <stdio.h>

int main() {
    int inicio, fim, k;

    printf("Digite o valor inicial: ");
    scanf("%d", &inicio);

    printf("Digite o valor final (maior ou igual ao inicial): ");
    scanf("%d", &fim);

    while (fim < inicio) {
        printf("Valor final inválido. Digite novamente (>= %d): ", inicio);
        scanf("%d", &fim);
    }

    printf("Digite o valor de k (divisor): ");
    scanf("%d", &k);

    while (k == 0) {
        printf("k não pode ser zero. Digite novamente: ");
        scanf("%d", &k);
    }

    printf("Múltiplos de %d no intervalo [%d, %d]:\n", k, inicio, fim);
    for (int i = inicio; i <= fim; i++) {
        if (i % k == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
