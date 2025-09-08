#include <stdio.h>

int main() {
    int opcao;
    float numero;

    do {
        printf("\n--- MENU ---\n");
        printf("1) Dobrar um número\n");
        printf("2) Metade de um número\n");
        printf("0) Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite um número: ");
                scanf("%f", &numero);
                printf("O dobro de %.2f é %.2f\n", numero, numero * 2);
                break;

            case 2:
                printf("Digite um número: ");
                scanf("%f", &numero);
                printf("A metade de %.2f é %.2f\n", numero, numero / 2);
                break;

            case 0:
                printf("Encerrando o programa...\n");
                break;

            default:
                printf("Opção inválida! Tente novamente.\n");
        }

    } while (opcao != 0);

    return 0;
}
