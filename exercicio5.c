#include <stdio.h>

int main() {
    float nota, soma = 0;
    int count = 0;

    printf("Digite uma nota (negativa para sair): ");
    scanf("%f", &nota);

    while (nota >= 0) {
        soma += nota;
        count++;

        printf("Digite outra nota (negativa para sair): ");
        scanf("%f", &nota);
    }

    if (count > 0) {
        float media = soma / count;
        printf("Quantidade de notas válidas: %d\n", count);
        printf("Média das notas: %.2f\n", media);
    } else {
        printf("Nenhuma nota válida foi inserida.\n");
    }

    return 0;
}