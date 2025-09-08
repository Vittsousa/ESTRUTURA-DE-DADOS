#include <stdio.h>

int main() {
    int N, soma = 0, impar = 1;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &N);

    while (N <= 0) {
        printf("Entrada inválida. Digite um número positivo: ");
        scanf("%d", &N);
    }

    for (int i = 0; i < N; i++) {
        soma += impar;
        impar += 2;
    }

    printf("A soma dos %d primeiros números ímpares é: %d\n", N, soma);

    return 0;
}
