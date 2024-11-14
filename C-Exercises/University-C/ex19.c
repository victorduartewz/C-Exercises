//ATIVIDADE AVALIATIVA – LINGUAGEM E TECNICAS DE PROGRAMACAO
//Nome: Victor Hugo Borges Duarte
//RA: 5168061
//Atividade: Lista de Exercicios 2 - Exercicio 19

#include <stdio.h>
#include <math.h>

int main() {
    float numero;

    do {
        printf("Digite um numero (negativo para sair): ");
        scanf("%f", &numero);

        if (numero >= 0) {
            printf("A raiz quadrada de %.2f e: %.2f\n", numero, sqrt(numero));
        }
    } while (numero >= 0);

    printf("Numero negativo digitado. Encerrando o programa.\n");

    return 0;
}