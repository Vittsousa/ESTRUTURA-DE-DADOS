#include <stdio.h>

int main() {
    int num1;

    printf("Digite o numero para a tabuada: ");
    scanf("%d", &num1);

    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num1, i, num1 * i);
    }

    return 0;
}