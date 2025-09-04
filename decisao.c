#include <stdio.h>

// DESVIO CONDICIONAL (if-else)
// É quando o programa toma uma decisão com base em uma condição lógica (true ou false)

/**
 * Ex1: SE eu tiver dinheiro, então comprarei o carro. SENÃO, ficarei a pé mesmo.
 *
 * Ex2: Se houverem alunos na sala, haverá aula
 * SENÃO, não haverá aula
 */
int main()
{
    /*
        if(condição lógica){ // sempre o if testa o valor verdadeiro primeiro
            <então faça alguma coisa>
        }else{ // a condição NÃO é verdadeira (falsa)
            <então faça outra coisa>
        }

        Operadores relacionais (condição)
            > maior
            < menor
            >= maior ou igual
            <= menor ou igual
            == igual
            != diferente
    */
    // int idade = 17;
    int idade;
    printf("Informe a sua idade: ");
    scanf("%d", &idade); // ler a idade a partir do teclado

    if (idade >= 18){
        printf("Parabens, voce ja pode tirar carta de motorista."); // o resultado 18 >= 18 é verdade
    }else{
        printf("Vixi, vai ter que continuar indo de Uber.");
    }
    return 0;
}