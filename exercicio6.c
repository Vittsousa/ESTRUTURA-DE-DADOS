#include <stdio.h>

int main() {
    int N;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &N);

    while (N <= 0) {
        printf("Entrada inválida. Digite um número positivo: ");
        scanf("%d", &N);
    }

    while (N >= 0) {
        printf("%d\n", N);
        N--;
    }

    printf("FIM!\n");

    return 0;
}