#include <stdio.h>

int main() {
    float preco, total = 0;
    int quantidade = 0;

    printf("Digite o preço do item (0 para encerrar): ");
    scanf("%f", &preco);

    while (preco != 0) {
        if (preco < 0) {
            printf("Preço inválido! Valores negativos serão ignorados.\n");
        } else {
            total += preco;
            quantidade++;
        }

        printf("Digite o preço do próximo item (0 para encerrar): ");
        scanf("%f", &preco);
    }

    printf("\nTotal de itens: %d\n", quantidade);
    printf("Valor total da compra: R$ %.2f\n", total);

    return 0;
}
