#include <stdio.h>

int main() {
    int n;
    float celsius, fahrenheit;

    printf("Digite o número de temperaturas a serem convertidas: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Digite a temperatura #%d em Celsius: ", i);
        scanf("%f", &celsius);

        fahrenheit = celsius * 1.8 + 32;

        printf("Temperatura #%d em Fahrenheit: %.2f°F\n", i, fahrenheit);
    }

    return 0;
}
