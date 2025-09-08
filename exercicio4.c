#include <stdio.h>

int main() {
    int idade;

    printf("Digite uma idade entre 0 e 120: ");
    scanf("%d", &idade);

    while (idade < 0 || idade > 120) {
        printf("Idade inválida. Digite novamente: ");
        scanf("%d", &idade);
    }

    printf("Idade válida: %d\n", idade);

    return 0;
}
